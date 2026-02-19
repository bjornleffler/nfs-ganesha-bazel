load("@rules_cc//cc:defs.bzl", "cc_library", "cc_shared_library", "cc_binary")

package(default_visibility = ["//visibility:public"])

# TODO(leffler): Add "scaleout" library.

cc_library(
    name = "main_services",
    srcs = [
        "nfs_admin_thread.c",
        "nfs_init.c",
        "nfs_lib.c",
        "nfs_metrics.c",
        "nfs_reaper_thread.c",
        "nfs_rpc_callback.c",
        "nfs_rpc_dispatcher_thread.c",
        "nfs_rpc_tcp_socket_manager_thread.c",
        "nfs_worker_thread.c",
    ],
    hdrs = [],
    copts = [
        # Bjorn fixed paths. This one is outside the toolchain.
        # /usr/lib/aarch64-linux-gnu/dbus-1.0/include"
        "-I /usr/include/dbus-1.0",
    ],
    defines = [
        # Lock down NFS standalone server to localhost only.
        "BFS_LOCKDOWN_LOCALHOST=1",
    ],
    linkopts = ["-lurcu-bp"],
    strip_include_prefix = "//nfs-ganesha/src",
    deps = [
        "//nfs-ganesha/src/bazel",
        "//nfs-ganesha/src/include",
        "//nfs-ganesha/src/include/FSAL",
        "//nfs-ganesha/src/include/gsh_lttng",
        "//nfs-ganesha/src/include/os/linux",

        # if(USE_DBUS)
        # "//nfs-ganesha/src/dbus",
        "//nfs-ganesha/src/FSAL",
        "//nfs-ganesha/src/idmapper",
        "//nfs-ganesha/src/log",
        "//nfs-ganesha/src/monitoring",
        # if(USE_NFS3)
        "//nfs-ganesha/src/Protocols/NFS:nfs3",
        "//nfs-ganesha/src/Protocols/NFS:nfs4callbacks",
        "//nfs-ganesha/src/Protocols/NFSACL",
        # if(USE_NLM)
        "//nfs-ganesha/src/Protocols/NLM",
        # if(USE_RQUOTA)
        "//nfs-ganesha/src/Protocols/RQUOTA",
        "//nfs-ganesha/src/Protocols/XDR:rquota",
        # if (USE_9P)
        # "//nfs-ganesha/src/Protocols/9P",
        "//nfs-ganesha/src/RPCAL",
        # if (_USE_NLM)
        "//nfs-ganesha/src/SAL:nlm",
        "//nfs-ganesha/src/SAL:state",
        "//nfs-ganesha/src/support:client_mgr",
        "//ntirpc/ntirpc/lttng",
        "//ntirpc/ntirpc/misc",
        "//ntirpc/ntirpc/rpc",
        "//ntirpc/src:ntirpc",
    ],
)

cc_shared_library(
    name = "libnfsd",
    shared_lib_name = "libnfsd.so",
    deps = [":main_services"],
)

cc_binary(
    name = "nfsd",
    srcs = ["nfs_main.c"],
    dynamic_deps = [
        ":libnfsd",
    ],
    deps = [
        "//nfs-ganesha/src/bazel",
        "//nfs-ganesha/src/include",
        "//nfs-ganesha/src/include/FSAL",
        "//nfs-ganesha/src/include/gsh_lttng",
        "//nfs-ganesha/src/monitoring:includes",
        "//ntirpc/ntirpc",
        "//ntirpc/ntirpc/lttng",
        "//ntirpc/ntirpc/misc",
        "//ntirpc/ntirpc/rpc",
    ],
)
