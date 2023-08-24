# bazel-intro
Bazel is an open-source build and test tool similar to Make, Maven, and Gradle. It uses a human-readable, high-level build language. Bazel supports projects in multiple languages and builds outputs for multiple platforms. Bazel supports large codebases across multiple repositories, and large numbers of users.

# Benefits
Bazel offers the following advantages:

- **High-level build language.** Bazel uses an abstract, human-readable language to describe the build properties of your project at a high semantical level. Unlike other tools, Bazel operates on the concepts of libraries, binaries, scripts, and data sets, shielding you from the complexity of writing individual calls to tools such as compilers and linkers.

- **Bazel is fast and reliable.** Bazel caches all previously done work and tracks changes to both file content and build commands. This way, Bazel knows when something needs to be rebuilt, and rebuilds only that. To further speed up your builds, you can set up your project to build in a highly parallel and incremental fashion.

- **Bazel is multi-platform.** Bazel runs on Linux, macOS, and Windows. Bazel can build binaries and deployable packages for multiple platforms, including desktop, server, and mobile, from the same project.

- **Bazel scales.** Bazel maintains agility while handling builds with 100k+ source files. It works with multiple repositories and user bases in the tens of thousands.

Bazel is extensible. Many languages are supported, and you can extend Bazel to support any other language or framework.

