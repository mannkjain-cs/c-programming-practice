#include <stdio.h>

unsigned long long factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main(void)
{
    int n;

    printf("Enter a number (0-20): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20)
    {
        printf("Please enter a number between 0 and 20.\n");
        return 1;
    }

    printf("%d! = %llu\n", n, factorial(n));

    return 0;
}
