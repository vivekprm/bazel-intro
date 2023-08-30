# To debug using clang
```sh
clang++ -g main.cc lib1/lib1.cc lib2/lib2.cc
```

```sh
lldb a.out
(lldb) breakpoint set -f examples/example3/main.cc -l 8
(lldb) r
```

# To debug using bazel
```sh
bazel build -c dbg --spawn_strategy=standalone //examples/example3:example3
bazel build -c dbg --spawn_strategy=standalone //examples/example3:example3_dsym
lldb bazel-bin/examples/example3/example3
```

Use CodeLLDB plugin with below vscode debug configuration
```
{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "type": "lldb",
            "request": "launch",
            "name": "Launch",
            "program": "${workspaceFolder}/bazel-bin/examples/example3/example3",
            "args": [],
            "cwd": "${workspaceFolder}"
        }
    ]
}
```