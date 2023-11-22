#include "stack.h"

/**
 * match_char - Checks if two characters form a valid pair of brackets.
 * @open: The open bracket character.
 * @close: The close bracket character.
 * Return: true if the brackets form a valid pair, false otherwise.
 */
bool match_char(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

/**
 * check_balance - Checks the validity of nested brackets in an expression.
 * @expression: The expression to be checked.
 * Return: true if the expression is balanced, false otherwise.
 */
bool check_balance(char expression[]) {
    for (int i = 0; expression[i] != '\0'; i++) {
        char current_char = expression[i];

        if (current_char == '(' || current_char == '[' || current_char == '{') {
            push(current_char);
        } else if (current_char == ')' || current_char == ']' || current_char == '}') {
            if (is_empty() || !match_char(pop(), current_char)) {
                display_error(expression, i);
                return false;
            }
        }
    }

    display_stack();
    return is_empty();
}

/**
 * display_error - Displays an error message for unbalanced expressions.
 * @expression: The expression with unbalanced brackets.
 * @position: The position of the first mismatched bracket.
 */
void display_error(char expression[], int position) {
    printf("Error: The expression is not balanced at position %d\n", position);
    printf("%s\n", expression);
    for (int i = 0; i < position; i++) {
        printf(" ");
    }
    printf("^\n");
}
