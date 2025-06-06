/**
 * \file  hw_mdio.h
 *
 * \brief MDIO register definitions
 */

/*
 * Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
 */
/*
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef HW_MDIO_H
#define HW_MDIO_H

#ifdef __cplusplus
extern "C" {
#endif

#define MDIO_REVID (0x0)
#define MDIO_CONTROL (0x4)
#define MDIO_ALIVE (0x8)
#define MDIO_LINK (0xC)
#define MDIO_LINKINTRAW (0x10)
#define MDIO_LINKINTMASKED (0x14)
#define MDIO_USERINTRAW (0x20)
#define MDIO_USERINTMASKED (0x24)
#define MDIO_USERINTMASKSET (0x28)
#define MDIO_USERINTMASKCLEAR (0x2C)
#define MDIO_USERACCESS0 (0x80)
#define MDIO_USERPHYSEL0 (0x84)
#define MDIO_USERACCESS1 (0x88)
#define MDIO_USERPHYSEL1 (0x8C)

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* REVID */

#define MDIO_REVID_REV (0xFFFFFFFFu)
#define MDIO_REVID_REV_SHIFT (0x00000000u)

/* CONTROL */

#define MDIO_CONTROL_IDLE (0x80000000u)
#define MDIO_CONTROL_IDLE_SHIFT (0x0000001Fu)
/*----IDLE Tokens----*/
#define MDIO_CONTROL_IDLE_NO (0x00000000u)
#define MDIO_CONTROL_IDLE_YES (0x00000001u)

#define MDIO_CONTROL_ENABLE (0x40000000u)
#define MDIO_CONTROL_ENABLE_SHIFT (0x0000001Eu)

#define MDIO_CONTROL_HIGHEST_USER_CHANNEL (0x1F000000u)
#define MDIO_CONTROL_HIGHEST_USER_CHANNEL_SHIFT (0x00000018u)

#define MDIO_CONTROL_PREAMBLE (0x00100000u)
#define MDIO_CONTROL_PREAMBLE_SHIFT (0x00000014u)
/*----PREAMBLE Tokens----*/

#define MDIO_CONTROL_FAULT (0x00080000u)
#define MDIO_CONTROL_FAULT_SHIFT (0x00000013u)

#define MDIO_CONTROL_FAULTENB (0x00040000u)
#define MDIO_CONTROL_FAULTENB_SHIFT (0x00000012u)
/*----FAULTENB Tokens----*/

#define MDIO_CONTROL_CLKDIV (0x0000FFFFu)
#define MDIO_CONTROL_CLKDIV_SHIFT (0x00000000u)
/*----CLKDIV Tokens----*/

/* ALIVE */

#define MDIO_ALIVE_REGVAL (0xFFFFFFFFu)
#define MDIO_ALIVE_REGVAL_SHIFT (0x00000000u)

/* LINK */

#define MDIO_LINK_REGVAL (0xFFFFFFFFu)
#define MDIO_LINK_REGVAL_SHIFT (0x00000000u)

/* LINKINTRAW */

#define MDIO_LINKINTRAW_USERPHY1 (0x00000002u)
#define MDIO_LINKINTRAW_USERPHY1_SHIFT (0x00000001u)

#define MDIO_LINKINTRAW_USERPHY0 (0x00000001u)
#define MDIO_LINKINTRAW_USERPHY0_SHIFT (0x00000000u)

/* LINKINTMASKED */

#define MDIO_LINKINTMASKED_USERPHY1 (0x00000002u)
#define MDIO_LINKINTMASKED_USERPHY1_SHIFT (0x00000001u)

#define MDIO_LINKINTMASKED_USERPHY0 (0x00000001u)
#define MDIO_LINKINTMASKED_USERPHY0_SHIFT (0x00000000u)

/* USERINTRAW */

#define MDIO_USERINTRAW_USERACCESS1 (0x00000002u)
#define MDIO_USERINTRAW_USERACCESS1_SHIFT (0x00000001u)

#define MDIO_USERINTRAW_USERACCESS0 (0x00000001u)
#define MDIO_USERINTRAW_USERACCESS0_SHIFT (0x00000000u)

/* USERINTMASKED */

#define MDIO_USERINTMASKED_USERACCESS1 (0x00000002u)
#define MDIO_USERINTMASKED_USERACCESS1_SHIFT (0x00000001u)

#define MDIO_USERINTMASKED_USERACCESS0 (0x00000001u)
#define MDIO_USERINTMASKED_USERACCESS0_SHIFT (0x00000000u)

/* USERINTMASKSET */

#define MDIO_USERINTMASKSET_USERACCESS1 (0x00000002u)
#define MDIO_USERINTMASKSET_USERACCESS1_SHIFT (0x00000001u)

#define MDIO_USERINTMASKSET_USERACCESS0 (0x00000001u)
#define MDIO_USERINTMASKSET_USERACCESS0_SHIFT (0x00000000u)

/* USERINTMASKCLEAR */

#define MDIO_USERINTMASKCLEAR_USERACCESS1 (0x00000002u)
#define MDIO_USERINTMASKCLEAR_USERACCESS1_SHIFT (0x00000001u)

#define MDIO_USERINTMASKCLEAR_USERACCESS0 (0x00000001u)
#define MDIO_USERINTMASKCLEAR_USERACCESS0_SHIFT (0x00000000u)

/* USERACCESS0 */

#define MDIO_USERACCESS0_GO (0x80000000u)
#define MDIO_USERACCESS0_GO_SHIFT (0x0000001Fu)

#define MDIO_USERACCESS0_WRITE (0x40000000u)
#define MDIO_USERACCESS0_READ (0x00000000u)
#define MDIO_USERACCESS0_WRITE_SHIFT (0x0000001Eu)

#define MDIO_USERACCESS0_ACK (0x20000000u)
#define MDIO_USERACCESS0_ACK_SHIFT (0x0000001Du)

#define MDIO_USERACCESS0_REGADR (0x03E00000u)
#define MDIO_USERACCESS0_REGADR_SHIFT (0x00000015u)

#define MDIO_USERACCESS0_PHYADR (0x001F0000u)
#define MDIO_USERACCESS0_PHYADR_SHIFT (0x00000010u)

#define MDIO_USERACCESS0_DATA (0x0000FFFFu)
#define MDIO_USERACCESS0_DATA_SHIFT (0x00000000u)

/* USERPHYSEL0 */

#define MDIO_USERPHYSEL0_LINKSEL (0x00000080u)
#define MDIO_USERPHYSEL0_LINKSEL_SHIFT (0x00000007u)

#define MDIO_USERPHYSEL0_LINKINTENB (0x00000040u)
#define MDIO_USERPHYSEL0_LINKINTENB_SHIFT (0x00000006u)

#define MDIO_USERPHYSEL0_PHYADRMON (0x0000001Fu)
#define MDIO_USERPHYSEL0_PHYADRMON_SHIFT (0x00000000u)

/* USERACCESS1 */

#define MDIO_USERACCESS1_GO (0x80000000u)
#define MDIO_USERACCESS1_GO_SHIFT (0x0000001Fu)

#define MDIO_USERACCESS1_WRITE (0x40000000u)
#define MDIO_USERACCESS1_WRITE_SHIFT (0x0000001Eu)

#define MDIO_USERACCESS1_ACK (0x20000000u)
#define MDIO_USERACCESS1_ACK_SHIFT (0x0000001Du)

#define MDIO_USERACCESS1_REGADR (0x03E00000u)
#define MDIO_USERACCESS1_REGADR_SHIFT (0x00000015u)

#define MDIO_USERACCESS1_PHYADR (0x001F0000u)
#define MDIO_USERACCESS1_PHYADR_SHIFT (0x00000010u)

#define MDIO_USERACCESS1_DATA (0x0000FFFFu)
#define MDIO_USERACCESS1_DATA_SHIFT (0x00000000u)

/* USERPHYSEL1 */

#define MDIO_USERPHYSEL1_LINKSEL (0x00000080u)
#define MDIO_USERPHYSEL1_LINKSEL_SHIFT (0x00000007u)

#define MDIO_USERPHYSEL1_LINKINTENB (0x00000040u)
#define MDIO_USERPHYSEL1_LINKINTENB_SHIFT (0x00000006u)

#define MDIO_USERPHYSEL1_PHYADRMON (0x0000001Fu)
#define MDIO_USERPHYSEL1_PHYADRMON_SHIFT (0x00000000u)

#ifdef __cplusplus
}
#endif

#endif
