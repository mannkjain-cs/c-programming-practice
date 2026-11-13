// Check whether a number is prime
#include <stdio.h>

int main()
{
    int n, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2)
        flag = 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;      // a divisor is found, no need to check further
        }
    }

    if (flag == 1)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}
