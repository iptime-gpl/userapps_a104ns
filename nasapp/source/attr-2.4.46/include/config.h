/* include/config.h.  Generated from config.h.in by configure.  */
/*
 * Copyright (c) 2002 Silicon Graphics, Inc.  All Rights Reserved.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * @configure_input@
 */
#ifndef __CONFIG_H__
#define __CONFIG_H__

/* Define if you want gettext (I18N) support */
/* #undef ENABLE_GETTEXT */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

#ifdef ENABLE_GETTEXT
# include <libintl.h>
# define _(x)			gettext(x)
#else
# define _(x)			(x)
# define textdomain(d)		do { } while (0)
# define bindtextdomain(d,dir)	do { } while (0)
#endif
#include <locale.h>

#endif	/* __CONFIG_H__ */
