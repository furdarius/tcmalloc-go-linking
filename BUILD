package(default_visibility = ["//visibility:public"])

load(
    "@io_bazel_rules_go//go:def.bzl",
    "go_library",
    "go_binary",
    "go_test",
)

cc_library(
    name = "cxxlib",
    srcs = ["lib.cc"],
    hdrs = ["lib.h"],
    deps = [
        "@com_google_tcmalloc//tcmalloc:malloc_extension",
        "@com_google_absl//absl/strings",
        "@com_google_absl//absl/strings:str_format",
        "@com_google_absl//absl/types:optional",
    ],
    alwayslink = 1,
)

go_binary(
    name = "app",
    srcs = [
        "main.go",
    ],
    cdeps = [
        "@com_google_tcmalloc//tcmalloc:tcmalloc",
	":cxxlib",
    ],
    cgo = True,
)

