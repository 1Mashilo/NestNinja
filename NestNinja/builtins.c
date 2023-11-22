#include "stack.h"
#include <stdio.h>

/**
 * push - Pushes a character onto the stack.
 * @ch: The character to be pushed.
 */
void push(char ch) {
    if (top == MAX_SIZE - 1) {
        fprintf(stderr, "Error: Stack Overflow\n");
        clear_stack();  // Clear the stack to prevent potential issues
        return;
    }
    stack[++top] = ch;
    display_stack();  // Display the stack after each push
}

/**
 * pop - Pops a character from the stack.
 * Return: The popped character.
 */
char pop() {
    if (is_empty()) {
        fprintf(stderr, "Error: Stack Underflow\n");
        return '\0';
    }
    char popped_char = stack[top--];
    display_stack();  // Display the stack after each pop
    return popped_char;
}

/**
 * is_empty - Checks if the stack is empty.
 * Return: true if the stack is empty, false otherwise.
 */
bool is_empty() {
    return top == -1;
}

/**
 * clear_stack - Clears the stack.
 */
void clear_stack() {
    top = -1;
}

/**
 * display_stack - Displays the current state of the stack.
 */
void display_stack() {
    printf("Stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%c ", stack[i]);
    }
    printf("\n");
}
