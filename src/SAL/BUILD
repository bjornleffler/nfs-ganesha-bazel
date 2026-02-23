load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "state",
    srcs = [
        "nfs41_session_id.c",
        "nfs4_clientid.c",
        "nfs4_lease.c",
        "nfs4_owner.c",
        "nfs4_recovery.c",
        "nfs4_state.c",
        "nfs4_state_id.c",
        "sal_metrics.c",
        "state_async.c",
        "state_deleg.c",
        "state_layout.c",
        "state_lock.c",
        "state_misc.c",
        "state_share.c",
    ],
    hdrs = [],
    strip_include_prefix = "//nfs-ganesha/src",
    deps = [
        "//nfs-ganesha/src/SAL/recovery",
        "//nfs-ganesha/src/bazel",
        "//nfs-ganesha/src/hashtable",
        "//nfs-ganesha/src/include",
        "//nfs-ganesha/src/include/FSAL",
        "//nfs-ganesha/src/include/gsh_lttng",
        "//nfs-ganesha/src/include/os/linux",
        "//nfs-ganesha/src/support",
        "//ntirpc/ntirpc",
        "//ntirpc/ntirpc/lttng",
        "//ntirpc/ntirpc/misc",
        "//ntirpc/ntirpc/rpc",
    ],
)

cc_library(
    name = "nlm",
    srcs = [
        "nlm_owner.c",
        "nlm_state.c",
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

# cc_library(
#     name = "9p",
#     srcs = [
#         "9p_owner.c",
#     ],
#     hdrs = [],
#     strip_include_prefix = "//nfs-ganesha/src",
#     deps = [
#         "//nfs-ganesha/src/bazel",
#         "//nfs-ganesha/src/include",
#         "//nfs-ganesha/src/include/FSAL",
#         "//nfs-ganesha/src/include/gsh_lttng",
#         "//ntirpc/ntirpc",
#         "//ntirpc/ntirpc/lttng",
#         "//ntirpc/ntirpc/misc",
#         "//ntirpc/ntirpc/rpc",
#     ],
# )
