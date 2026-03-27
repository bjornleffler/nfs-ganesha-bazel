/* SPDX-License-Identifier: LGPL-3.0-or-later */
/*
 * vim:noexpandtab:shiftwidth=8:tabstop=8:
 *
 * Copyright (C) Panasas Inc., 2011
 * Author: Jim Lieb jlieb@panasas.com
 *
 * contributeur : Philippe DENIEL   philippe.deniel@cea.fr
 *                Thomas LEIBOVICI  thomas.leibovici@cea.fr
 *
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 * -------------
 */

/* config.h file expanded by Cmake for build */

#ifndef CONFIG_H
#define CONFIG_H

#define GSH_CHECK_VERSION(major,minor,micro,libmajor,libminor,libmicro) \
	((libmajor) > (major) || \
	((libmajor) == (major) && (libminor) > (minor)) || \
	((libmajor) == (major) && (libminor) == (minor) && (libmicro) >= (micro)))

#define GANESHA_VERSION_MAJOR 6
#define GANESHA_VERSION_MINOR .2
#define GANESHA_EXTRA_VERSION
#define GANESHA_VERSION "6.2"
#define GANESHA_BUILD_RELEASE 0

#define VERSION GANESHA_VERSION
#define VERSION_COMMENT "GANESHA file server is 64 bits compliant and supports NFS v3,4.0,4.1 (pNFS) and 9P"
#define _GIT_HEAD_COMMIT "c9ff03bb11397d525e8b768772a2a26b84628796"
#define _GIT_DESCRIBE "V6.2-0-gc9ff03bb1"
#define BUILD_HOST "docker-desktop"
#define FSAL_MODULE_LOC "/usr/lib/ganesha"

#define GANESHA_CONFIG_PATH "/etc/ganesha/ganesha.conf"
#define GANESHA_PIDFILE_PATH "/var/run/ganesha/ganesha.pid"
#define NFS_V4_RECOV_ROOT "/var/lib/nfs/ganesha"
#define NFS_V4_RECOV_DIR "v4recov"
#define NFS_V4_OLD_DIR "v4old"
/**
 * @brief Default value for krb5_param.ccache_dir
 */
#define DEFAULT_NFS_CCACHE_DIR "/var/run/ganesha"

#endif /* CONFIG_H */
