# Piscine Reloaded — 42 School

**User:** `jericard`

This repository contains the completed exercises from the **42 School Piscine Reloaded**, a comprehensive review assignment that revisits and consolidates every major concept covered during the C Piscine. Unlike the original Piscine modules, Reloaded is a single project of 28 sequential exercises (ex00–ex27) spanning shell scripting, C fundamentals, pointers, algorithms, memory allocation, data structures, and file I/O.

---

## Index

- [Shell Exercises (ex00–ex05)](#shell-exercises-ex00ex05)
- [Basic C Output (ex06–ex08)](#basic-c-output-ex06ex08)
- [Pointers (ex09–ex11)](#pointers-ex09ex11)
- [Algorithms & Math (ex12–ex14)](#algorithms--math-ex12ex14)
- [String Functions (ex15–ex17)](#string-functions-ex15ex17)
- [Command-Line Arguments (ex18–ex19)](#command-line-arguments-ex18ex19)
- [Dynamic Memory (ex20–ex21)](#dynamic-memory-ex20ex21)
- [Headers, Structs & Makefiles (ex22–ex24)](#headers-structs--makefiles-ex22ex24)
- [Function Pointers (ex25–ex26)](#function-pointers-ex25ex26)
- [File I/O (ex27)](#file-io-ex27)

---

## Shell Exercises (ex00–ex05)

**Objective:** Review Unix file system concepts and shell scripting. Covers file permissions, symbolic links, tar archives, the `find` command, regex with `grep`, text processing with `sed` and `tr`, and handling filenames with shell special characters.

| Exercise | File | What it does |
|----------|------|-------------|
| `ex00` | `exo.tar` | Archive containing files and directories with specific Unix permissions, symlinks, and special attributes to inspect and reproduce |
| `ex01` | `z` | File containing a single `Z` — basic shell file creation |
| `ex02` | `clean` | `find . -type f \( -name "*~" -o -name "#*#" \) -print -delete` — removes editor backup files recursively |
| `ex03` | `find_sh.sh` | `find . -type f -name "*.sh" -printf "%f\n" \| sed 's/\.[^.]*$//'` — lists shell scripts without their extension |
| `ex04` | `MAC.sh` | `ifconfig \| grep -oE '([0-9a-fA-F]{2}:){5}[0-9a-fA-F]{2}'` — extracts all MAC addresses from network interfaces |
| `ex05` | `"\?$*'MaRViN'*$?\"` | A file whose name contains shell metacharacters — practices quoting and escaping special characters |

---

## Basic C Output (ex06–ex08)

**Objective:** Reimplement the first C exercises: printing characters and digits with `write()`, and using `if/else` for conditional output. All functions rely on a `ft_putchar()` helper.

| Exercise | Function | What it does |
|----------|----------|-------------|
| `ex06` | `ft_print_alphabet(void)` | Prints `a` to `z` using a while loop over ASCII values |
| `ex07` | `ft_print_numbers(void)` | Prints `0` to `9` using character arithmetic |
| `ex08` | `ft_is_negative(int n)` | Prints `N` if `n < 0`, `P` otherwise |

---

## Pointers (ex09–ex11)

**Objective:** Practice pointer dereferencing and pass-by-reference patterns. Covers single pointer assignment, classic value swapping, and returning multiple computed results through output pointer parameters.

| Exercise | Function | What it does |
|----------|----------|-------------|
| `ex09` | `ft_ft(int *nbr)` | Dereferences a pointer and assigns `42` to the pointed-to value |
| `ex10` | `ft_swap(int *a, int *b)` | Swaps the values of two integers using a temporary variable |
| `ex11` | `ft_div_mod(int a, int b, int *div, int *mod)` | Computes `a / b` and `a % b`, storing results in the output pointers |

---

## Algorithms & Math (ex12–ex14)

**Objective:** Compare iterative and recursive solutions to the same mathematical problem, and implement a loop-based search algorithm. Covers factorial, exponentiation concepts, edge case handling (negative inputs, overflow), and integer square root detection.

| Exercise | Function | What it does |
|----------|----------|-------------|
| `ex12` | `ft_iterative_factorial(int nb)` | Computes `nb!` with a while loop; returns 0 for invalid inputs or `nb > 12` |
| `ex13` | `ft_recursive_factorial(int nb)` | Computes `nb!` recursively: `nb * factorial(nb - 1)`, base case at 0 and 1 |
| `ex14` | `ft_sqrt(int nb)` | Returns the integer square root of `nb` if it is a perfect square, otherwise 0 |

---

## String Functions (ex15–ex17)

**Objective:** Reimplement the core string utility functions of the C standard library from scratch using only pointer traversal and character-level operations.

| Exercise | Function | What it does |
|----------|----------|-------------|
| `ex15` | `ft_putstr(char *str)` | Iterates over a string and prints each character via `ft_putchar()` until `\0` |
| `ex16` | `ft_strlen(char *str)` | Counts and returns the number of characters before the null terminator |
| `ex17` | `ft_strcmp(char *s1, char *s2)` | Compares two strings lexicographically; returns `s1[i] - s2[i]` at the first difference |

---

## Command-Line Arguments (ex18–ex19)

**Objective:** Write complete programs that use `argc` and `argv`. Covers iterating over argument strings, nested loops for character output, and applying bubble sort directly to the `argv` pointer array.

| Exercise | Function | What it does |
|----------|----------|-------------|
| `ex18` | `main(int argc, char **argv)` | Prints every command-line argument on its own line, skipping `argv[0]` |
| `ex19` | `main(int argc, char **argv)` | Sorts `argv[1..argc-1]` alphabetically using bubble sort (swapping pointers), then prints them |

---

## Dynamic Memory (ex20–ex21)

**Objective:** Introduce heap memory management with `malloc`. Covers allocating memory for a string copy, validating allocation success, and creating a dynamically sized integer array from a range.

| Exercise | Function | What it does |
|----------|----------|-------------|
| `ex20` | `ft_strdup(char *src)` | Allocates heap memory for a copy of `src`, copies it, null-terminates, and returns the pointer (NULL on failure) |
| `ex21` | `ft_range(int min, int max)` | Allocates an int array filled with values `[min, max)` and returns it; returns NULL if `max <= min` or allocation fails |

---

## Headers, Structs & Makefiles (ex22–ex24)

**Objective:** Learn to organize C code properly. Covers writing function-like macros with the preprocessor, defining custom data structures with `struct` and `typedef`, and automating the build of a static library with a Makefile.

| Exercise | File | What it does |
|----------|------|-------------|
| `ex22` | `ft_abs.h` | Defines `#define ABS(x) ((x) < 0 ? -(x) : (x))` — absolute value as a preprocessor macro |
| `ex23` | `ft_point.h` | Defines `struct s_point { int x; int y; }` with `typedef t_point` — a 2D integer point structure |
| `ex24` | `Makefile` | Compiles `ft_putchar.c`, `ft_putstr.c`, `ft_strcmp.c`, `ft_strlen.c`, `ft_swap.c` into `libft.a` with `ar rcs`; includes `all`, `clean`, `fclean`, `re` targets |

---

## Function Pointers (ex25–ex26)

**Objective:** Introduce higher-order functions in C using function pointers. Covers applying a callback to every element of an array, and filtering an array by a predicate function.

| Exercise | Function | What it does |
|----------|----------|-------------|
| `ex25` | `ft_foreach(int *tab, int length, void (*f)(int))` | Iterates over an int array and calls `f(tab[i])` for each element |
| `ex26` | `ft_count_if(char **tab, int (*f)(char*))` | Iterates over a NULL-terminated string array, calls the predicate `f` on each string, and returns how many return 1 |

---

## File I/O (ex27)

**Objective:** Write a complete program that reads a file from disk using low-level system calls. Covers `open()` with `O_RDONLY`, `read()` into a buffer, `write()` to stdout, and handling all error cases (missing argument, too many arguments, unreadable file).

| Exercise | Program | What it does |
|----------|---------|-------------|
| `ex27` | `ft_display_file` | Takes exactly one argument (a filename), opens it with `open()`, reads up to 1024 bytes, and writes them to stdout. Prints a specific error message and exits with code 1 for: missing filename, extra arguments, or unreadable file |

---

*42 School — Piscine Reloaded | jericard*
