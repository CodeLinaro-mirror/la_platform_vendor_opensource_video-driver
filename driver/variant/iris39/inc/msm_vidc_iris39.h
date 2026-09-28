/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 */

#ifndef _MSM_VIDC_IRIS39_H_
#define _MSM_VIDC_IRIS39_H_

struct msm_vidc_core;
struct v4l2_ctrl;

#if defined(CONFIG_MSM_VIDC_MAHUA)
int msm_vidc_init_iris39(struct msm_vidc_core *core);
int msm_vidc_adjust_bitrate_boost_iris39(void *instance, struct v4l2_ctrl *ctrl);
#else
static inline int msm_vidc_init_iris39(struct msm_vidc_core *core)
{
	return -EINVAL;
}

static inline int msm_vidc_adjust_bitrate_boost_iris39(void *instance, struct v4l2_ctrl *ctrl)
{
	return -EINVAL;
}
#endif

#endif // _MSM_VIDC_IRIS39_H_
