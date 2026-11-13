// Factorial of a number using recursion
#include <stdio.h>

int fact(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial of a negative number does not exist\n");
    else
        printf("Factorial of %d = %d\n", n, fact(n));

    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)       // base case
        return 1;
    else
        return n * fact(n - 1); // recursive call
}
