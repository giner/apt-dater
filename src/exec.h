/* apt-dater - terminal-based remote package update manager
 *
 * Authors:
 *   Andre Ellguth <ellguth@ibh.de>
 *   Thomas Liske <liske@ibh.de>
 *
 * Copyright Holder:
 *   2008-2012 (C) IBH IT-Service GmbH [http://www.ibh.de/apt-dater/]
 *
 * License:
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this package; if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef _EXEC_H
#define _EXEC_H

#include "ui.h"

gboolean
ssh_cmd_refresh(HostNode *n);

gboolean
ssh_cmd_upgrade(HostNode *n, const gboolean detached);

gboolean
ssh_cmd_install(HostNode *n, gchar *package, const gboolean detached);

void
ssh_connect(HostNode *n, const gboolean detached);

void
sftp_connect(HostNode *n);

#endif /* _EXEC_H */
