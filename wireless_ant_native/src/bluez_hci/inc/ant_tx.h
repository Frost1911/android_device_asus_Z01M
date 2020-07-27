/*
 * ANT Stack
 *
 * Copyright 2009 Dynastream Innovations
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/******************************************************************************\
*
*   FILE NAME:      ant_tx.h
*
*   BRIEF:
*      This file defines the utility functions used by the transmit function.
*
*
\******************************************************************************/

#ifndef __ANT_TX_H
#define __ANT_TX_H

#include "ant_types.h"
#include "ant_hciutils.h"

int         ant_open_tx_transport(void);
void        ant_close_tx_transport(int socket);
ANT_BOOL    wait_for_message(int socket);
ANTStatus   write_data(ANT_U8 ant_message[], int ant_message_len);

ANTStatus get_command_complete_result(int socket);

#endif /* __ANT_TX_H */

