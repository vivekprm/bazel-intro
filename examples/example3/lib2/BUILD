load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "lib2",
    srcs = ["lib2.cc"],
    hdrs = ["lib2.h"],
    # Only targets in this package can use this target
    visibility = ["//examples/example3:__pkg__"],
)