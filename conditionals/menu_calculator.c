// Menu-driven calculator using switch
#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice)
    {
    case 1:
        printf("Sum = %.2f\n", a + b);
        break;
    case 2:
        printf("Difference = %.2f\n", a - b);
        break;
    case 3:
        printf("Product = %.2f\n", a * b);
        break;
    case 4:
        if (b == 0)
            printf("Division by zero is not possible\n");
        else
            printf("Quotient = %.2f\n", a / b);
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}
