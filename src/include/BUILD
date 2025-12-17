# load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "include",
    srcs = [],
    hdrs = glob(["*h"]),
    strip_include_prefix = "//nfs-ganesha/src/include",
    deps = [
        "//nfs-ganesha/src/include/os",
        "//nfs-ganesha/src/include/os/linux",
    ],
)
