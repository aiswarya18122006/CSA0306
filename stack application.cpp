#include <stdio.h>
#include <ctype.h>  // for isdigit()

#define MAX 100

int stack[MAX];
int top = -1;

// Push operation
void push(int val) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = val;
    }
}

// Pop operation
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

// Function to evaluate postfix expression
int evaluatePostfix(char exp[]) {
    int i, val1, val2, result;

    for (i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];

        if (isdigit(ch)) {
            push(ch - '0');  // Convert char to int
        } else {
            val2 = pop();
            val1 = pop();

            switch (ch) {
                case '+': result = val1 + val2; break;
                case '-': result = val1 - val2; break;
                case '*': result = val1 * val2; break;
                case '/': result = val1 / val2; break;
                default:
                    printf("Invalid operator: %c\n", ch);
                    return -1;
            }
            push(result);
        }
    }

    return pop();  // Final result
}

int main() {
    char expression[MAX];

    printf("Enter postfix expression (e.g., 53*2+): ");
    scanf("%s", expression);

    int result = evaluatePostfix(expression);
    printf("Result = %d\n", result);

    return 0;
}
