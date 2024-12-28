# `ts` vs `go` vs `rust` vs `c`

## Setup

To run the benchmarks, ensure that you have the following tools installed:

- **Bun**: A fast JavaScript runtime that supports TypeScript.
- **Go**: The Go programming language.
- **Rust**: The Rust programming language and rust-script.
- **GCC**: The C compiler.

Make sure you have each of these tools properly installed and available in your system's `PATH`.

## Run

```bash
make run-performance  # run all the benchmarks
```

# Results

| Language | Execution time |
| -------- | -------------- |
| TS (Bun) | 5128.1054 ms   |
| GO       | 3153.0000 ms   |
| RUST     | 0.0000000 ms   |
| C        | 0.0000000 ms   |

## Conclusion

- C and Rust are the fastest
- TypeScript with bun is the slowest
- Golang is faster than TypeScript with bun

## References

- [Bun](https://bun.sh/)
- [TypeScript](https://www.typescriptlang.org/)
- [Rust](https://www.rust-lang.org/)
- [Go](https://go.dev/)
- [C](<https://en.wikipedia.org/wiki/C_(programming_language)>)
