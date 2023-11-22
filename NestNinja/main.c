#include "stack.h"

/**
 * main - Entry point of the program.
 * Return: 0 on success, 1 on failure.
 */
int main() {
    char expression[MAX_SIZE];

    printf("Enter an expression with brackets: ");
    if (scanf("%99[^\n]", expression) != 1) {
        fprintf(stderr, "Error: Invalid input\n");
        return 1;
    }

    if (check_balance(expression)) {
        printf("The expression is balanced.\n");
    } else {
      printf("The expression is not balanced.\n");  
    }

    return 0;
}
