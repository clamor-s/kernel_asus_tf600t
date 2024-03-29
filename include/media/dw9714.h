/*
 * Copyright (C) 2010-2011 NVIDIA Corporation.
 *
 * Contributors:
 *      Sachin Nikam <snikam@nvidia.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 * 02111-1307, USA
 */

#ifndef __DW9714_H__
#define __DW9714_H__

#include <linux/ioctl.h>  /* For IOCTL macros */

#define DW9714_IOCTL_GET_CONFIG   _IOR('o', 1, struct dw9714_config)
#define DW9714_IOCTL_SET_POSITION _IOW('o', 2, u32)

struct dw9714_config {
	__u32 settle_time;
	__u32 actuator_range;
	__u32 pos_low;
	__u32 pos_high;
	__u8  vcm_mode;
	float focal_length;
	float fnumber;
	float max_aperture;
};

#endif  /* __DW9714_H__ */
