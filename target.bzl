load(":video_modules.bzl", "video_driver_modules")
load(":video_driver_build.bzl", "define_consolidate_gki_perf_modules")

def define_blair():
    define_consolidate_gki_perf_modules(
        target = "blair",
        registry = video_driver_modules,
        modules = [
            "msm_video",
        ],
        config_options = [
            "CONFIG_MSM_VIDC_BLAIR",
            "CONFIG_MSM_VIDC_AR50LT",
        ],
    )

def define_pitti():
    define_consolidate_gki_perf_modules(
        target = "pitti",
        registry = video_driver_modules,
        modules = [
            "msm_video",
        ],
        config_options = [
            "CONFIG_MSM_VIDC_BLAIR",
            "CONFIG_MSM_VIDC_AR50LT",
        ],
    )

def define_neo_la(extra_config_options):
    define_consolidate_gki_perf_modules(
        target = "neo-la",
        registry = video_driver_modules,
        modules = [
            "msm_video",
        ],
        config_options = [
            "CONFIG_MSM_VIDC_NEO",
	    "CONFIG_MSM_VIDC_AR50LT",
            "CONFIG_MSM_VIDC_IRIS3",
        ],
        extra_config_options = extra_config_options,
    )
