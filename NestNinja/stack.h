#include <stdbool.h>
#include <stdio.h>

#ifndef STACK_H
#define STACK_H
#define MAX_SIZE 100

extern int top;
extern char stack[MAX_SIZE];

void push(char ch);
char pop();
bool is_empty();
void clear_stack();
void display_stack();
bool match_char(char open, char close);
bool check_balance(char expression[]);
void display_error(char expression[], int position);

#endif

