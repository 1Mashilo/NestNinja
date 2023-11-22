# NestNinja

NestNinja is a C program that provides a bracket checker for validating nested expressions. It ensures the correct balance and nesting of various brackets, such as parentheses, square brackets, and curly braces.

## Features

- **Bracket Checking:** Validates the balance of nested brackets in an expression.
- **Error Handling:** Provides informative error messages for unbalanced expressions.
- **Stack Implementation:** Utilizes a stack data structure for efficient bracket checking.

## Table of Contents

1. [Files](#files)
2. [Compilation & Usage](#compilation--usage)
3. [Examples](#examples)
4. [Development Environment](#development-environment)
5. [Contributors](#contributors)
6. [License](#license)

## Files

1. **stack.h:** Header file containing the stack data structure and function prototypes.
2. **bracket_checker.c:** Main implementation of the bracket checker.
3. **main.c:** Entry point of the program.

## Compilation & Usage

Compile the project using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o bracket_checker
./bracket_checker { [ ( ) ] }


The program will analyze the expression and determine whether it is balanced or not. If the expression is balanced, it will display a message indicating that the expression is valid. If the expression is unbalanced, it will display an error message indicating the position where the imbalance occurs.

## Development Environment

The project is developed and tested in the following environment:

- Operating System: Ubuntu 20.04 LTS
- Compiler: GCC 9.3.0
- Additional Dependencies: None

## Contributors

- Mashilo


