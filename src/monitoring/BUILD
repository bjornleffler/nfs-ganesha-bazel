load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "monitoring",
    srcs = [
        "dynamic_metrics.cc",
        "prometheus_exposer.cc",
    ],
    hdrs = [],
    defines = [
        # Lock down NFS standalone server to localhost only.
        "BFS_LOCKDOWN_LOCALHOST=1",
    ],
    strip_include_prefix = "//nfs-ganesha/src",
    deps = [
        ":includes",
        "//nfs-ganesha/src/bazel",
        "//nfs-ganesha/src/include",
        "//ntirpc/src/monitoring",
        "//prometheus-cpp-lite/core",
    ],
)

cc_library(
    name = "includes",
    srcs = [],
    hdrs = glob(["include/*.h"]),
    strip_include_prefix = "//nfs-ganesha/src/monitoring/include",
    visibility = ["//visibility:public"],
    deps = [
        "//prometheus-cpp-lite/core",
    ],
)
