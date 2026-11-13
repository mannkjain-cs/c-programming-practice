// Swap two numbers: with a third variable and without one
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Method 1: using a third variable
    temp = a;
    a = b;
    b = temp;
    printf("After swap (third variable): a = %d, b = %d\n", a, b);

    // Method 2: without a third variable (swaps them back)
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap (no third variable): a = %d, b = %d\n", a, b);

    return 0;
}
