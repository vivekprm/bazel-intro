# To debug
```sh
clang++ -g main.cc lib1/lib1.cc lib2/lib2.cc
```

```sh
lldb a.out
(lldb) breakpoint set -f examples/example3/main.cc -l 8
(lldb) r
```