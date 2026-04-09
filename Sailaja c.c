#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Stack for operators
char stack[MAX];
int top = -1;

// Push
void push(char x) {
    stack[++top] = x;
}

// Pop
char pop() {
    if (top == -1)
        return -1;
    return stack[top--];
}

// Priority
int priority(char x) {
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}

// Infix to Postfix
void infixToPostfix(char exp[], char result[]) {
    int i, k = 0;
    char x;

    for (i = 0; exp[i] != '\0'; i++) {
        if (isalnum(exp[i])) {
            result[k++] = exp[i];
        }
        else if (exp[i] == '(') {
            push(exp[i]);
        }
        else if (exp[i] == ')') {
            while ((x = pop()) != '(') {
                result[k++] = x;
            }
        }
        else {
            while (top != -1 && priority(stack[top]) >= priority(exp[i])) {
                result[k++] = pop();
            }
            push(exp[i]);
        }
    }

    while (top != -1) {
        result[k++] = pop();
    }

    result[k] = '\0';
}

// Evaluate Postfix
int evaluatePostfix(char exp[]) {
    int stack[MAX];
    int top = -1;
    int i;

    for (i = 0; exp[i] != '\0'; i++) {
        if (isdigit(exp[i])) {
            stack[++top] = exp[i] - '0';
        }
        else {
            int val1 = stack[top--];
            int val2 = stack[top--];

            switch (exp[i]) {
                case '+': stack[++top] = val2 + val1; break;
                case '-': stack[++top] = val2 - val1; break;
                case '*': stack[++top] = val2 * val1; break;
                case '/': stack[++top] = val2 / val1; break;
            }
        }
    }
    return stack[top];
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix Expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);

    printf("Result: %d\n", result);

    return 0;
}
