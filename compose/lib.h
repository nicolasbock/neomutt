/**
 * @file
 * GUI editor for an email's headers
 *
 * @authors
 * Copyright (C) 2020 Richard Russon <rich@flatcap.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @page lib_compose COMPOSE: Display and edit an email's headers
 *
 * Display the mailboxes in a side panel
 *
 * | File                | Description                |
 * | :------------------ | :------------------------- |
 * | compose/compose.c   | @subpage compose_compose   |
 * | compose/config.c    | @subpage compose_config    |
 */

#ifndef MUTT_COMPOSE_LIB_H
#define MUTT_COMPOSE_LIB_H

#include <stdint.h>

struct Buffer;
struct Email;

/* flags for mutt_compose_menu() */
#define MUTT_COMPOSE_NOFREEHEADER (1 << 0)

int mutt_compose_menu(struct Email *e, struct Buffer *fcc, struct Email *e_cur, uint8_t flags, struct ConfigSubset *sub);

#endif /* MUTT_COMPOSE_LIB_H */
