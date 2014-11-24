/* -*- c-set-style: "K&R"; c-basic-offset: 8 -*-
 *
 * This file is part of PRoot.
 *
 * Copyright (C) 2014 STMicroelectronics
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA.
 */

#ifndef WIO_H
#define WIO_H

#include <stdbool.h>	/* bool, */

typedef struct {
	struct {
		bool successful_actions;		/* (TODO: switchable)	*/
		bool unsuccessful_actions;		/* (TODO)		*/
		bool path_traversal;			/* (TODO: switchable)	*/
		bool path_type;				/* (TODO)		*/
		bool path_content_usage;		/* (TODO: switchable)	*/
		bool path_metadata_usage;		/* (TODO: switchable)	*/
		bool process_usage;			/* (TODO: switchable)	*/

		struct {
			bool coalesced;			/* (TODO: WIP)		*/
			/* List *exclude_paths;		 * (TODO)		*/
			/* List *exclude_all_but_paths;	 * (TODO)		*/
		} simplification;
	} record;

	struct {
		const char path;			/* (TODO)		*/
		enum {
			TEXT_EVERYTHING,		/* (TODO)		*/
			TEXT_IO_FILES,			/* (TODO)		*/
			KCONFIG_FS_USAGE,		/* (TODO)		*/
			KCONFIG_PROCESS_TREE,		/* (TODO)		*/
			KCONFIG_FS_DEPENDENCIES,	/* (TODO)		*/
			GMAKE_FS_DEPENDENCIES,		/* (TODO)		*/
		} format;
	} output;
} Options;

#endif /* WIO_H */