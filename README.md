Here is a GitHub README for a C Reload project under 42 Bangkok.

---

# C Reload — 42 Bangkok

> Reloading C fundamentals: from Piscine to fluent coding.

## About

This repository contains my **C Reload** exercises completed at **42 Bangkok**. The goal is to reinforce core C concepts through repetition and deliberate practice: pointers, memory management, string manipulation, basic algorithms, and the 42 Norm.

## Project Structure

```
.
├── ex00/
├── ex01/
├── ex02/
├── ...
└── README.md
```

Each `ex` directory corresponds to one exercise and typically contains:
- Source files (`.c`)
- Header files (`.h`, if needed)
- A test `main.c` (where applicable)

## Environment & Compilation

**Requirements:**
- Unix-like system (Linux / macOS)
- `cc` or `gcc`
- `make` (if the repo includes a Makefile)

**Compile examples:**

```bash
# If an exercise has a Makefile
cd ex00 && make

# Or compile manually
cc -Wall -Wextra -Werror *.c -o program
```

**42 Norm check:**

```bash
norminette
```


## What I Learned

- Understanding the `write` system call and how it relates to standard output
- Pointer arithmetic and array decay
- Avoiding memory leaks: pairing `malloc` with `free`
- Following the 42 Norm: function length, variable declaration placement, no `for` loops, etc.

## Notes

This project is a personal learning record and is not guaranteed to pass the Moulinette. If you are also at 42 Bangkok, feel free to discuss ideas — but please try it yourself first.

## References

- 42 Bangkok official Intra project page
- `man write` / `man malloc` / `man free`
- 42 Norm specification (where applicable)

