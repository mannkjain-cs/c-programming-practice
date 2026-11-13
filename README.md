# C Programming Practice

![Language](https://img.shields.io/badge/language-C-00599C?logo=c&logoColor=white)
![Programs](https://img.shields.io/badge/programs-20-brightgreen)

My C programming practice from the first year of **B.Tech Computer Science Engineering (Data Science)**, organised topic by topic from the basics up to pointers, structures and file handling.

Every program validates its input and compiles cleanly with `gcc -Wall -Wextra`.

## Programs

| Topic | Programs | Concepts practised |
|---|---|---|
| [basics](basics/) | Hello World, user input, arithmetic operations | `printf`, `scanf`, data types, operators |
| [conditionals](conditionals/) | Even/odd, grade calculator, simple calculator | `if`/`else if`, `switch`, input validation |
| [loops](loops/) | Multiplication table, Fibonacci series, prime check | `for`, `break`, √n optimisation |
| [functions](functions/) | Recursive factorial, GCD & LCM | recursion, Euclid's algorithm, overflow-safe maths |
| [arrays](arrays/) | Array statistics, bubble sort, binary search | traversal, sorting with early exit, O(log n) search |
| [strings](strings/) | Palindrome checker, vowel/consonant counter | `fgets`, `<ctype.h>`, two-pointer technique |
| [pointers](pointers/) | Swap using pointers, dynamic array | pass-by-reference, `malloc`/`free`, pointer arithmetic |
| [structures](structures/) | Student records | `struct`, arrays of structs, formatted tables |
| [file-handling](file-handling/) | Notes app | `fopen`, `fgets`/`fputs`, append vs read modes, menus |

## How to run

```bash
gcc -Wall -Wextra -o program loops/prime_check.c
./program
```

## Example

```text
$ ./palindrome
Enter a word or sentence: Never odd or even
"Never odd or even" is a palindrome.
```

## What's next

- Linked lists, stacks and queues in C
- Data structures & algorithms practice
- Python for data analysis

## Author

**Mann Kamal Jain** — B.Tech CSE (Data Science) student
[GitHub](https://github.com/mannkjain-cs)
