# 0x11. C - printf TEAM PROJECT

## Description
This project aims to demonstrate our team work on the _printf function which writes formatted output to the standard output stream (stdout). It supports several conversion specifiers and flags, implemented incrementally through various tasks. Each task adds new features to the function.

## TASKS


- Basic Conversion Specifiers

Task 0: Handle the following conversion specifiers:
c: Character
s: String
%: Percent sign


- Integer Conversion Specifiers

Task 1: Handle the following conversion specifiers:
d: Signed decimal integer
i: Signed decimal integer
Binary Conversion Specifier

Task 2: Handle the following custom conversion specifier:
b: Unsigned integer converted to binary
Additional Integer Conversion Specifiers

Task 3: Handle the following conversion specifiers:
u: Unsigned decimal integer
o: Unsigned octal integer
x: Unsigned hexadecimal integer (lowercase)
X: Unsigned hexadecimal integer (uppercase)


- Buffer Usage

Task 4: Use a local buffer of 1024 characters to minimize calls to write.
String Formatting with Non-printable Characters

Task 5: Handle the following custom conversion specifier:
S: Print a string where non-printable characters are formatted as \x followed by their ASCII code in hexadecimal (uppercase)


- Flags for Non-Custom Specifiers

Task 7: Handle the following flags:
+: Always print sign for numbers
space: Print a space before positive numbers
#: Alternate form for octal and hexadecimal
Length Modifiers

Task 8: Handle length modifiers for conversion specifiers:
l: Long
h: Short


- Field Width Handling

Task 9: Handle field width for non-custom conversion specifiers.
Precision Handling

Task 10: Handle precision for non-custom conversion specifiers.
Zero Flag Handling

Task 11: Handle the 0 flag character for non-custom conversion specifiers.
Minus Flag Handling

Task 12: Handle the - flag character for non-custom conversion specifiers.


- Reversed String

Task 13: Handle the following custom conversion specifier:
r: Print the reversed string
ROT13 Transformation

Task 14: Handle the following custom conversion specifier:
R: Print the string encoded in ROT13


--------------------------------------------------------------------


## Collaborators - Cjay-Cipher & sirnicson

## Process
- Creation of repository
- Clonening of repo on local machine
- Creation of README.md file
- Creation of header file (main.h)
- Creation of .c files
-- _printf.c
-- flags.c
-- get_width.c
-- handle_print.c
-- handlers.c
-- presicion.c
-- print_functions.c
-- print_functions1.c
-- print_functions2.c
-- size.c
-- utils.c
-- main.c (extracted from project dashboard)
- Compile .c files with gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
- Push to github
- Team review and edit of project files on github
