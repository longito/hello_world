# AGENTS.md

## Build & run

No build system (no Makefile, CMakeLists.txt, etc.). Compile and link manually:

```bash
gcc -o hello main.c hello.c
./hello          # prints "hello world,this is cbt"
./hello Alice    # prints "hello world,this is Alice"
```

## Project structure

| File | Role |
|------|------|
| `main.c` | Entry point. Reads optional name from `argv[1]` |
| `hello.h` | Declares `hello()`–`hello5()` + `PRINT_HELLO_DEFAULT` macro |
| `hello.c` | Implements all five greeting functions |

No tests, no CI, no linter, no formatter config.
