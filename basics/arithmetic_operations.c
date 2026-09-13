#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("The sum of two numbers = %.2f\n", a + b);
    printf("The difference of two numbers = %.2f\n", a - b);
    printf("The product of two numbers = %.2f\n", a * b);

    if (b != 0)
    {
        printf("The division of two numbers = %.2f\n", a / b);
    }
    else
    {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}
