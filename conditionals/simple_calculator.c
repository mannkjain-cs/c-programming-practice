#include <stdio.h>

int main()
{
    double a, b;
    char op;

    printf("Enter an expression (e.g. 4 * 5): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }

    switch (op)
    {
    case '+':
        printf("Result = %.2f\n", a + b);
        break;
    case '-':
        printf("Result = %.2f\n", a - b);
        break;
    case '*':
        printf("Result = %.2f\n", a * b);
        break;
    case '/':
        if (b == 0)
            printf("Division by zero is not possible.\n");
        else
            printf("Result = %.2f\n", a / b);
        break;
    default:
        printf("Unknown operator '%c'.\n", op);
    }

    return 0;
}
