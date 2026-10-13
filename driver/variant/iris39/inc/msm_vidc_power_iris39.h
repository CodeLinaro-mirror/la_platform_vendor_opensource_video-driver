/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 */

#ifndef __H_MSM_VIDC_POWER_IRIS39_H__
#define __H_MSM_VIDC_POWER_IRIS39_H__

struct msm_vidc_inst;
struct vidc_bus_vote_data;

#define ENABLE_LEGACY_POWER_CALCULATIONS  0

int msm_vidc_ring_buf_count_iris39(struct msm_vidc_inst *inst, u32 data_size);
u64 msm_vidc_calc_freq_iris39(struct msm_vidc_inst *inst, u32 data_size);
int msm_vidc_calc_bw_iris39(struct msm_vidc_inst *inst,
		struct vidc_bus_vote_data *vote_data);
int msm_vidc_scale_clocks_iris39(struct msm_vidc_inst *inst);

#endif
