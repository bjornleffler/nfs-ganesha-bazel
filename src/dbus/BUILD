# load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "dbus",
    srcs = glob(["*.c"]),
    hdrs = glob(["*.h"]),
    copts = [
        # Bjorn fixed paths. This one is outside the toolchain.
        # "-I /usr/include/dbus-1.0",
        # "-I /usr/lib/aarch64-linux-gnu/dbus-1.0/include",
    ],
    linkopts = ["-ldbus-1"],
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
