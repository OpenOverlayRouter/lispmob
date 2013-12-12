/*
 * lispd.h
 *
 * This file is part of LISP Mobile Node Implementation.
 * Definitions for lispd.
 * 
 * Copyright (C) 2011 Cisco Systems, Inc, 2011. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * Please send any bug reports or fixes you make to the email address(es):
 *    LISP-MN developers <devel@lispmob.org>
 *
 * Written or modified by:
 *    David Meyer       <dmm@cisco.com>
 *    Preethi Natarajan <prenatar@cisco.com>
 *    Lorand Jakab      <ljakab@ac.upc.edu>
 *    Alberto Rodriguez Natal <arnatal@ac.upc.edu>
 *
 */

#ifndef LISPD_H_
#define LISPD_H_

#include "defs.h"

/*
 * Netlink mcast groups lispd is interested in
 * for interface management
 */
#define LISPD_IFACE_NLMGRPS     (RTMGRP_LINK | RTMGRP_IPV4_IFADDR | RTMGRP_IPV4_ROUTE)
/* #define LISPD_IFACE_NLMGRPS     (RTMGRP_LINK | RTMGRP_IPV4_IFADDR | RTMGRP_IPV6_IFADDR \
                                                | RTMGRP_IPV4_ROUTE | RTMGRP_IPV6_ROUTE )
*/

void exit_cleanup(void);


#endif /*LISPD_H_*/

/*
 * Editor modelines
 *
 * vi: set shiftwidth=4 tabstop=4 expandtab:
 * :indentSize=4:tabSize=4:noTabs=true:
 */
