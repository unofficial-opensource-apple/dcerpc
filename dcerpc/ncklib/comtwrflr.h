/*
 * Copyright (c) 2010 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 * 3.  Neither the name of Apple Inc. ("Apple") nor the names of its
 *     contributors may be used to endorse or promote products derived from
 *     this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Portions of this software have been released under the following terms:
 *
 * (c) Copyright 1989-1993 OPEN SOFTWARE FOUNDATION, INC.
 * (c) Copyright 1989-1993 HEWLETT-PACKARD COMPANY
 * (c) Copyright 1989-1993 DIGITAL EQUIPMENT CORPORATION
 *
 * To anyone who acknowledges that this file is provided "AS IS"
 * without any express or implied warranty:
 * permission to use, copy, modify, and distribute this file for any
 * purpose is hereby granted without fee, provided that the above
 * copyright notices and this notice appears in all source code copies,
 * and that none of the names of Open Software Foundation, Inc., Hewlett-
 * Packard Company or Digital Equipment Corporation be used
 * in advertising or publicity pertaining to distribution of the software
 * without specific, written prior permission.  Neither Open Software
 * Foundation, Inc., Hewlett-Packard Company nor Digital
 * Equipment Corporation makes any representations about the suitability
 * of this software for any purpose.
 *
 * Copyright (c) 2007, Novell, Inc. All rights reserved.
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 * 3.  Neither the name of Novell Inc. nor the names of its contributors
 *     may be used to endorse or promote products derived from this
 *     this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * @APPLE_LICENSE_HEADER_END@
 */

/*
**
**  NAME
**
**      comtwrflr.h
**
**  FACILITY:
**
**      Remote Procedure Call (RPC)
**
**  ABSTRACT:
**
**      Contains private definitions and prototypes of the
**      comtwrflr.c module.
**
**
*/

#ifndef _COMTWRFLR_H
#define _COMTWRFLR_H 1

/*
 * Constants
 */

/*
 * The architecturally defined tower floor protocol identifier
 * prefix to signify the succeeding data as an RPC uuid.
 */
#define RPC_C_PROT_ID_PREFIX    (0x0D)

/*
 * Prototypes
 */

#ifdef __cplusplus
extern "C" {
#endif

PRIVATE void rpc__tower_flr_free (
    rpc_tower_floor_p_t     * /*floor*/,
    unsigned32              * /*status*/
);

PRIVATE void rpc__tower_flr_from_drep (
    rpc_syntax_id_p_t        /*transfer_syntax*/,
    rpc_tower_floor_p_t     * /*floor*/,
    unsigned32              * /*status*/
);

PRIVATE void rpc__tower_flr_from_if_id (
    rpc_if_id_p_t            /*if_id*/,
    rpc_tower_floor_p_t     * /*floor*/,
    unsigned32              * /*status*/
);

PRIVATE void rpc__tower_flr_from_rpc_prot_id (
    rpc_protseq_id_t         /*rpc_protseq_id*/,
    rpc_protocol_version_p_t /*protocol_version*/,
    rpc_tower_floor_p_t     * /*floor*/,
    unsigned32              * /*status*/
);

PRIVATE void rpc__tower_flr_from_uuid (
    uuid_p_t                 /*uuid*/,
    unsigned32               /*version_major*/,
    unsigned32               /*version_minor*/,
    rpc_tower_floor_p_t     * /*floor*/,
    unsigned32              * /*status*/
);

PRIVATE void rpc__tower_flr_id_from_uuid (
    uuid_p_t         /*uuid*/,
    unsigned32       /*version_major*/,
    unsigned32      * /*prot_id_len*/,
    unsigned8       ** /*prot_id*/,
    unsigned32      * /*status*/
);

PRIVATE void rpc__tower_flr_id_to_uuid (
    unsigned8       * /*prot_id*/,
    idl_uuid_t          * /*uuid*/,
    unsigned32      * /*version_major*/,
    unsigned32      * /*status*/
);

PRIVATE void rpc__tower_flr_to_drep (
    rpc_tower_floor_p_t      /*floor*/,
    rpc_syntax_id_t         * /*transfer_syntax*/,
    unsigned32              * /*status*/
);

PRIVATE void rpc__tower_flr_to_if_id (
    rpc_tower_floor_p_t      /*floor*/,
    rpc_if_id_t             * /*if_id*/,
    unsigned32              * /*status*/
);

PRIVATE void rpc__tower_flr_to_rpc_prot_id (
    rpc_tower_floor_p_t      /*floor*/,
    rpc_protocol_id_t       * /*rpc_protocol_id*/,
    unsigned32              * /*version_major*/,
    unsigned32              * /*version_minor*/,
    unsigned32              * /*status*/
);

PRIVATE void rpc__tower_flr_to_uuid (
    rpc_tower_floor_p_t      /*floor*/,
    idl_uuid_t                  * /*uuid*/,
    unsigned32              * /*version_major*/,
    unsigned32              * /*version_minor*/,
    unsigned32              * /*status*/
);

#endif /* _COMTWRFLR_H */
