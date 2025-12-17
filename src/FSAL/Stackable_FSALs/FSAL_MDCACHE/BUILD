# load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "FSAL_MDCACHE",
    srcs = [
        "mdcache_avl.c",
        "mdcache_export.c",
        "mdcache_file.c",
        "mdcache_handle.c",
        "mdcache_hash.c",
        "mdcache_helpers.c",
        "mdcache_lru.c",
        "mdcache_main.c",
        "mdcache_read_conf.c",
        "mdcache_up.c",
        "mdcache_xattrs.c",
    ],
    hdrs = [
        "mdcache_avl.h",
        "mdcache_ext.h",
        "mdcache_hash.h",
        "mdcache_int.h",
        "mdcache_lru.h",
    ],
    copts = [
        # Bjorn fixed paths. This one is outside the toolchain.
        # /usr/lib/aarch64-linux-gnu/dbus-1.0/include"
        "-I /usr/include/dbus-1.0",
    ],
    strip_include_prefix = "//nfs-ganesha/src",
    deps = [
        "//nfs-ganesha/src/FSAL",
        "//nfs-ganesha/src/bazel",
        "//nfs-ganesha/src/include/os",
        "//nfs-ganesha/src/include/os/linux",
        "//nfs-ganesha/src/monitoring",
    ],
)
