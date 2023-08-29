load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "example3", 
    srcs = ["main.cc"], 
    deps = [
        "//examples/example3/lib1:lib1",
        "//examples/example3/lib2:lib2",
    ]
)

genrule(
    name = "example3_dsym",
    srcs = [":example3"],
    outs = ["example3.dSYM"],
    output_to_bindir = True,
    cmd = "dsymutil $(location :example3) -o $@"
)