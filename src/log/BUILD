load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "log",
    srcs = glob(["*.c"]),
    copts = [
        # Bjorn fixed paths. This one is outside the toolchain.
        # /usr/lib/aarch64-linux-gnu/dbus-1.0/include"
        "-I /usr/include/dbus-1.0",
    ],
    strip_include_prefix = "//nfs-ganesha/src",
    textual_hdrs = [],
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
