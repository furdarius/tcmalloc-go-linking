workspace(name = "org_hello")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_google_absl",
    urls = ["https://github.com/abseil/abseil-cpp/archive/4a23151e7ee089f54f0575f0a6d499e3a3fb6728.zip"],
    strip_prefix = "abseil-cpp-4a23151e7ee089f54f0575f0a6d499e3a3fb6728",
    sha256 = "cf38027784ad8e1f89e864155cf118770f842b7eb0ed20827350d5dde54d4141",
)

http_archive(
    name = "com_google_tcmalloc",
    urls = ["https://github.com/google/tcmalloc/archive/a8a232f3dc9c41196e06251e7164d0404f19cf49.zip"],
    strip_prefix = "tcmalloc-a8a232f3dc9c41196e06251e7164d0404f19cf49",
    sha256 = "caf0cd0e8db1c173b9de5e9c6877763b6110fee4f22688cf808736895d7f0477",
)

http_archive(
    name = "rules_fuzzing",
    sha256 = "a5734cb42b1b69395c57e0bbd32ade394d5c3d6afbfe782b24816a96da24660d",
    strip_prefix = "rules_fuzzing-0.1.1",
    urls = ["https://github.com/bazelbuild/rules_fuzzing/archive/v0.1.1.zip"],
)

load("@rules_fuzzing//fuzzing:repositories.bzl", "rules_fuzzing_dependencies")

rules_fuzzing_dependencies()

load("@rules_fuzzing//fuzzing:init.bzl", "rules_fuzzing_init")

rules_fuzzing_init()



load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "io_bazel_rules_go",
    sha256 = "8e968b5fcea1d2d64071872b12737bbb5514524ee5f0a4f54f5920266c261acb",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/rules_go/releases/download/v0.28.0/rules_go-v0.28.0.zip",
        "https://github.com/bazelbuild/rules_go/releases/download/v0.28.0/rules_go-v0.28.0.zip",
    ],
)

load("@io_bazel_rules_go//go:deps.bzl", "go_register_toolchains", "go_rules_dependencies")

go_rules_dependencies()

go_register_toolchains(version = "1.16.5")


