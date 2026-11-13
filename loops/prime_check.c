#include <stdio.h>

int main()
{
    int n, is_prime = 1;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 2)
        is_prime = 0;

    /* Only need to check divisors up to the square root of n */
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    printf("%d is %s.\n", n, is_prime ? "prime" : "not prime");

    return 0;
}
