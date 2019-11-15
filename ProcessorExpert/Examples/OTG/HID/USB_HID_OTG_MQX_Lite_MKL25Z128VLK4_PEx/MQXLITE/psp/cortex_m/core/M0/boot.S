/**HEADER******************************************************************
*
* Copyright (c) 2010-2011 Freescale Semiconductor;
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
* $FileName: boot.S$
* $Version : 3.8.10.3$
* $Date    : Dec-2-2011$
*
* Comments:
*
*
*END************************************************************************/

#include "asm_mac.h"
#include "mqx_cnfg.h"
#include "types.inc"
#include "psp_prv.inc"

#define __ASM__

#ifdef __CWARM__
#include "kinetis.h"
#else
#include "psp_cpu.h"
#endif /* __CWARM__ */

#undef __ASM__

/*FUNCTION*-------------------------------------------------------------------

 Function Name    : __boot
 Returned Value   :
 Comments         : startup sequence

 END*-----------------------------------------------------------------------*/

ASM_COMP_SPECIFIC_DIRECTIVES

    ASM_CODE_SECTION(.text)
    SET_FUNCTION_ALIGNMENT

    ASM_PUBLIC(__boot)
    ASM_PUBLIC(__set_MSP)

ASM_PUBLIC_BEGIN(__boot)
ASM_PUBLIC_FUNC(__boot)
ASM_LABEL(__boot)
        /* disable interrupts and clear pending flags */
        ldr r0, =0xe000e180     /* NVIC_ICER0 - Interrupt Clear-Enable Registers */
        ldr r1, =0xe000e280     /* NVIC_ICPR0 - Interrupt Clear-Pending Registers */
        ldr r2, =0xffffffff
        movs r3, #8

ASM_LABEL(_boot_loop)
        cmp r3, #0
        beq _boot_loop_end
        str r2, [r0]            /* NVIC_ICERx - clear enable IRQ register */

#if __GNUC__
        adds r0, #4
        str r2, [r1]            /* NVIC_ICPRx - clear pending IRQ register */
        adds r1, #4
        subs r3, r3, #1
#else
        add r0, #4
        str r2, [r1]            /* NVIC_ICPRx - clear pending IRQ register */
        add r1, #4
        sub r3, r3, #1
#endif

        b _boot_loop

ASM_LABEL(_boot_loop_end)

        /* prepare process stack pointer */
        mrs r0, MSP
        msr PSP, r0

        /* switch to proccess stack (PSP) */
        mrs r0, CONTROL
        movs r4, #0x2
        orrs r0, r0, r4
        msr CONTROL, r0
        isb

#if defined(__CODEWARRIOR__) || __GNUC__
        ASM_EXTERN(__thumb_startup)
        bl ASM_PREFIX(__thumb_startup)
#elif defined(__IAR_SYSTEMS_ICC__)  || defined (__IASMARM__)
        ASM_EXTERN(__iar_program_start)
        b ASM_PREFIX(__iar_program_start)
#elif defined(__CC_ARM)
        ASM_EXTERN(__thumb_startup)
        bl ASM_PREFIX(__thumb_startup)

#endif


ASM_PUBLIC_END(__boot)

ASM_PUBLIC_BEGIN(__set_MSP)
ASM_PUBLIC_FUNC(__set_MSP)
ASM_LABEL(__set_MSP)
        msr MSP, r0
        bx lr
ASM_PUBLIC_END(__set_MSP)

        ASM_ALIGN(4)
        ASM_END
