load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "NFSACL",
    srcs = [
        "nfsacl_Null.c",
        "nfsacl_getacl.c",
        "nfsacl_setacl.c",
    ],
    hdrs = [],
    strip_include_prefix = "//nfs-ganesha/src",
    deps = [
        "//nfs-ganesha/src/bazel",
        "//nfs-ganesha/src/include",
        "//nfs-ganesha/src/include/FSAL",
        "//nfs-ganesha/src/include/gsh_lttng",
        "//ntirpc/ntirpc",
        "//ntirpc/ntirpc/lttng",
        "//ntirpc/ntirpc/misc",
        "//ntirpc/ntirpc/rpc",
    ],
)
