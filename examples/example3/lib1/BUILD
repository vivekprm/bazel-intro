load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "lib1",
    srcs = ["lib1.cc"],
    hdrs = ["lib1.h"],
    # Only targets in this package can use this target
    visibility = ["//examples/example3:__pkg__"],
)