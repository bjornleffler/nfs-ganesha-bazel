load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

# TODO(leffler): Run bison commands as part of the build automatically.

# Bison cheat sheet:
# sudo apt install bison
# bison --defines -pganesha_yy -o conf_yacc.c conf_yacc.y

# Flex cheat sheet:
# sudo apt install flex
# flex -Pganeshun_yy -oconf_lex.c conf_lex.l

cc_library(
    name = "config_parsing",
    srcs = [
        "analyse.c",
        "conf_lex.c",
        "conf_url.c",
        "conf_yacc.c",
        "config_parsing.c",
    ],
    hdrs = [
        "analyse.h",
        "conf_yacc.h",
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
