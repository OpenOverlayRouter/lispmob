/*
 *
 * Copyright (C) 2011, 2015 Cisco Systems, Inc.
 * Copyright (C) 2015 CBA research group, Technical University of Catalonia.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef LISP_DDT_NODE_H_
#define LISP_DDT_NODE_H_

#include "oor_ctrl_device.h"
#include "../lib/lisp_site.h"


typedef struct _lisp_ddt_node {
    oor_ctrl_dev_t super;    /* base "class" */

    /* ms members */

    //needs to save EID-prefixes for which this node is authoritative
    //probably not this same structure
    mdb_t *lisp_sites_db;
    mdb_t *reg_sites_db;
} lisp_ddt_node_t;

/* ms interface */
/*
int ddt_node_add_lisp_site_prefix(lisp_ddt_node_t *ddt_node, lisp_site_prefix_t *site);
int ddt_node_add_registered_site_prefix(lisp_ddt_node_t *dev, mapping_t *sp);
void ddt_node_dump_configured_sites(lisp_ddt_node_t *dev, int log_level);
void ddt_node_dump_registered_sites(lisp_ddt_node_t *dev, int log_level);
*/

#endif /* LISP_DDT_NODE_H_ */