load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "hashtable",
    srcs = glob(["*.c"]),
    hdrs = [],
    strip_include_prefix = "//nfs-ganesha/src",
    deps = [
        "//nfs-ganesha/src/bazel",
        "//nfs-ganesha/src/include",
        "//ntirpc/ntirpc",
        "//ntirpc/ntirpc/lttng",
        "//ntirpc/ntirpc/misc",
        "//ntirpc/ntirpc/rpc",
    ],
)
