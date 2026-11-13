// Print all prime and perfect numbers between m and n using checker functions
#include <stdio.h>

int isPrime(int num);
int isPerfect(int num);

int main()
{
    int m, n, i;

    printf("Enter range m and n: ");
    scanf("%d %d", &m, &n);

    printf("Prime numbers: ");
    for (i = m; i <= n; i++)
    {
        if (isPrime(i) == 1)
            printf("%d ", i);
    }

    printf("\nPerfect numbers: ");
    for (i = m; i <= n; i++)
    {
        if (isPerfect(i) == 1)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

int isPrime(int num)
{
    int i;

    if (num < 2)
        return 0;

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int isPerfect(int num)
{
    int i, sum = 0;

    if (num < 2)
        return 0;

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }

    if (sum == num)
        return 1;
    else
        return 0;
}
