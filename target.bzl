load(":video_modules.bzl", "video_driver_modules")
load(":video_driver_build.bzl", "define_consolidate_gki_modules")

def define_anorak():
    define_consolidate_gki_modules(
        target = "anorak",
        registry = video_driver_modules,
        modules = [
            "msm_video",
        ],
        config_options = [
            "CONFIG_MSM_VIDC_ANORAK",
	    "CONFIG_MSM_VIDC_IRIS3",
        ],
    )
