#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter operator(+,-,*,/): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break; // Add break statement here
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return -1;
            }
            break;
        default:
            printf("Error: Invalid Operator.\n");
            return -1;
    }

    printf("Result: %lf", result);

    return 0;
}
