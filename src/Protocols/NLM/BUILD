load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "NLM",
    srcs = [
        "nlm_Cancel.c",
        "nlm_Free_All.c",
        "nlm_Granted_Res.c",
        "nlm_Lock.c",
        "nlm_Null.c",
        "nlm_Share.c",
        "nlm_Sm_Notify.c",
        "nlm_Test.c",
        "nlm_Unlock.c",
        "nlm_Unshare.c",
        "nlm_async.c",
        "nlm_util.c",
        "nsm.c",
    ],
    hdrs = [],
    strip_include_prefix = "//nfs-ganesha/src",
    deps = [
        "//nfs-ganesha/src/Protocols/XDR:nfs_mnt_xdr",
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
