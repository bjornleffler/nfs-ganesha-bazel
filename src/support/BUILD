# load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "support",
    srcs = [
        "bsd-base64.c",
        "delayed_exec.c",
        "ds.c",
        "export_mgr.c",
        "exports.c",
        "fridgethr.c",
        "nfs4_acls.c",
        "nfs4_fs_locations.c",
        "nfs_convert.c",
        "nfs_creds.c",
        "nfs_filehandle_mgmt.c",
        "nfs_ip_name.c",
        "nfs_read_conf.c",
        "server_stats.c",
        "xprt_handler.c",
    ],
    hdrs = [],
    copts = [
        # Bjorn fixed paths. This one is outside the toolchain.
        # /usr/lib/aarch64-linux-gnu/dbus-1.0/include"
        "-I /usr/include/dbus-1.0",
    ],
    strip_include_prefix = "//nfs-ganesha/src",
    deps = [
        "//nfs-ganesha/src/FSAL/Stackable_FSALs/FSAL_MDCACHE",
        "//nfs-ganesha/src/FSAL_UP",
        "//nfs-ganesha/src/Protocols/NFS:nfsproto",
        "//nfs-ganesha/src/bazel",
        "//nfs-ganesha/src/dbus",
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

cc_library(
    name = "client_mgr",
    srcs = [
        "client_mgr.c",
    ],
    hdrs = [],
    copts = [
        # Bjorn fixed paths. This one is outside the toolchain.
        # /usr/lib/aarch64-linux-gnu/dbus-1.0/include"
        "-I /usr/include/dbus-1.0",
    ],
    strip_include_prefix = "//nfs-ganesha/src",
    deps = [
        "//nfs-ganesha/src/avl",
        "//nfs-ganesha/src/bazel",
        "//nfs-ganesha/src/config_parsing",
        "//nfs-ganesha/src/include",
        "//nfs-ganesha/src/include/FSAL",
        "//nfs-ganesha/src/include/gsh_lttng",
        "//nfs-ganesha/src/support:netgroup_cache",
        "//ntirpc/ntirpc",
        "//ntirpc/ntirpc/lttng",
        "//ntirpc/ntirpc/misc",
        "//ntirpc/ntirpc/rpc",
    ],
)

cc_library(
    name = "hash",
    srcs = [
        "city.c",
        "murmur3.c",
    ],
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

cc_library(
    name = "netgroup_cache",
    srcs = [
        "netgroup_cache.c",
    ],
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

cc_library(
    name = "string_utils",
    srcs = [
        "refstr.c",
        "strlcpy.c",
        "strnlen.c",
    ],
    hdrs = [],
    strip_include_prefix = "//nfs-ganesha/src",
    deps = [
        "//nfs-ganesha/src/bazel",
        "//nfs-ganesha/src/include",
    ],
)

cc_library(
    name = "uid2grp",
    srcs = [
        "uid2grp.c",
        "uid2grp_cache.c",
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
