load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "RPCAL",
    srcs = [
        "connection_manager.c",
        "connection_manager_metrics.c",
        "nfs_dupreq.c",
        "rpc_tools.c",
    ],
    hdrs = ["connection_manager_metrics.h"],
    strip_include_prefix = "//nfs-ganesha/src",
    deps = [
        "//nfs-ganesha/src/bazel",
        "//nfs-ganesha/src/include",
        "//nfs-ganesha/src/include/FSAL",
        "//nfs-ganesha/src/include/gsh_lttng",
        "//nfs-ganesha/src/monitoring",
        "//ntirpc/ntirpc",
        "//ntirpc/ntirpc/lttng",
        "//ntirpc/ntirpc/misc",
        "//ntirpc/ntirpc/rpc",
    ],
)
