# C Programming Practice

![Language](https://img.shields.io/badge/language-C-00599C?logo=c&logoColor=white)
![Programs](https://img.shields.io/badge/programs-34-brightgreen)

My C programming practice from the first year of **B.Tech Computer Science Engineering (Data Science)**, following the units of my Computational Thinking for Problem Solving (CTPS) course, from the basics up to pointers, structures and file handling.

All programs take input from the user, use function prototypes above `main()`, and compile cleanly with `gcc -Wall -Wextra`.

## Programs

| Unit | Topic | Programs | Concepts practised |
|---|---|---|---|
| 1 | [basics](basics/) | Hello World, user input, arithmetic operations, type conversion, swapping | `printf`/`scanf`, operators, integer division, type casting, `x++` vs `++x` |
| 2 | [conditionals](conditionals/) | Even/odd, grade calculator, menu calculator, leap year | `if`/`else if` ladder, `switch` menus, logical operators |
| 2 | [loops](loops/) | Multiplication table, Fibonacci, prime check, reverse & palindrome number, star patterns | `for`/`while`, nested loops, `break`, digit extraction with `%` and `/` |
| 3 | [arrays](arrays/) | Array statistics, bubble sort, linear & binary search, insert element, matrix operations | 1D and 2D arrays, sorting, searching, shifting elements, row/column sums, identity check |
| 3 | [strings](strings/) | Palindrome string, vowel/consonant counter, string operations | length, copy, concatenate, reverse and toggle case **without** `<string.h>` |
| 4 | [functions](functions/) | Recursive factorial, GCD & LCM, primes & perfect numbers in a range, °C→°F and array average, macro vs inline | prototypes, call by value, passing arrays, recursion, `#define` vs `inline` |
| 5 | [pointers](pointers/) | Call by value vs address, pointer arithmetic, `custom_strlen()` | `&` and `*`, `*(p + i)`, walking a string with a pointer |
| 5 | [structures](structures/) | Student records, structure pointer | arrays of structures, `->` operator, passing structs to functions |
| 6 | [file-handling](file-handling/) | Text file write/append/read, binary file records | `fopen` modes, `fprintf`/`fgets`, `fwrite`/`fread`, searching a file |

## How to run

```bash
gcc -Wall -Wextra -o program loops/prime_check.c
./program
```

## Example

```text
$ ./palindrome_string
Enter a string: madam
madam is a palindrome
```

## What's next

- Object-oriented programming in Java (Semester II)
- Linked lists, stacks and queues
- Data structures & algorithms practice

## Author

**Mann Kamal Jain** — B.Tech CSE (Data Science) student
[GitHub](https://github.com/mannkjain-cs)
