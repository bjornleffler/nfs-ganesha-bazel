# load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "FSAL",
    srcs = [
        "access_check.c",
        "common_pnfs.c",
        "commonlib.c",
        "default_methods.c",
        "fsal_config.c",
        "fsal_convert.c",
        "fsal_destroyer.c",
        "fsal_helper.c",
        "fsal_manager.c",
    ],
    hdrs = [],
    copts = [
        # Bjorn fixed paths. This one is outside the toolchain.
        # /usr/lib/aarch64-linux-gnu/dbus-1.0/include"
        "-I /usr/include/dbus-1.0",
    ],
    strip_include_prefix = "//nfs-ganesha/src",
    deps = [
        ":localfs",
        "//nfs-ganesha/src/FSAL/FSAL_PSEUDO",
        "//nfs-ganesha/src/bazel",
        "//nfs-ganesha/src/include",
        "//nfs-ganesha/src/include/FSAL",
        "//nfs-ganesha/src/include/gsh_lttng",
        "//nfs-ganesha/src/include/os",
        "//nfs-ganesha/src/include/os/linux",
        "//nfs-ganesha/src/os/linux",
        "//ntirpc/ntirpc",
        "//ntirpc/ntirpc/lttng",
        "//ntirpc/ntirpc/misc",
        "//ntirpc/ntirpc/rpc",
    ],
)

cc_library(
    name = "fsal_private",
    hdrs = [
        "fsal_private.h",
    ],
    strip_include_prefix = "//nfs-ganesha/src",
)

cc_library(
    name = "localfs",
    srcs = [
        "localfs.c",
    ],
    hdrs = [],
    copts = [
        # Bjorn fixed paths. This one is outside the toolchain.
        # /usr/lib/aarch64-linux-gnu/dbus-1.0/include"
        "-I /usr/include/dbus-1.0",
    ],
    linkopts = [
        "-lblkid",
        "-luuid",
    ],
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

cc_library(
    name = "posix_acls",
    srcs = [
        "posix_acls.c",
    ],
    # hdrs = glob(["*.h"]),
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
