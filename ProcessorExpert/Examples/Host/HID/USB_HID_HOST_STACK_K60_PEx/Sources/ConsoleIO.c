/**HEADER********************************************************************
*
* Copyright (c) 2010 Freescale Semiconductor;
* All Rights Reserved
*
* Copyright (c) 1989-2010 ARC International;
* All Rights Reserved
*
***************************************************************************
*
* THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESSED OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL FREESCALE OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
**************************************************************************
*
* $FileName: cdc_serial.c$
* $Version :
* $Date    :
*
* Comments:
*
*   This file is implemented to replacement of system console IO
*
*END************************************************************************/
/*************************************************************************
* Includes
/*************************************************************************/
#include "IO_Map.h"
#include "stdio.h"
#include "UART.h"
#include "file_struc.h"
#include "UART_PDD.h"

/*************************************************************************
* Global functions
/*************************************************************************/
int __write_console(__file_handle handle, unsigned char* buffer, size_t* count);

/*FUNCTION*----------------------------------------------------------------
*
* Function Name  : __write_console
* Returned Value : none
* Comments       :
*     This function is used to write to console IO
*
*END*--------------------------------------------------------------------*/
int __write_console(__file_handle handle, unsigned char* buffer, size_t* count)
{
    size_t i;

    (void)handle;
    for (i = 0; i < *count; i++) 
    {
        /* Send '\r' before each '\n'*/
        if (buffer[i] == '\n') 
        {
            /* Wait until UART is ready to write a next character into output buffer */
            while ((UART_PDD_ReadInterruptStatusReg(UART3_BASE_PTR) & UART_S1_TDRE_MASK) == 0) {};
            
            /* Save a character into the transmit buffer of the UART0 device */
            UART_PDD_PutChar8(UART3_BASE_PTR, '\r');
        }
        /* Save a character into the transmit buffer of the UART0 device */
        while ((UART_PDD_ReadInterruptStatusReg(UART3_BASE_PTR) & UART_S1_TDRE_MASK) == 0) {};
        
        /* Wait until UART is ready for saving a next character into the transmit buffer */
        UART_PDD_PutChar8(UART3_BASE_PTR, (unsigned char)buffer[i]);
    }
    /* Wait until last character is sent */
    while ((UART_PDD_ReadInterruptStatusReg(UART3_BASE_PTR) & UART_S1_TDRE_MASK) == 0) {};
    return(__no_io_error); 
}
/* EOF */


