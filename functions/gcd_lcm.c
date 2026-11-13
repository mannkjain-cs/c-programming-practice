#include <stdio.h>

/* Euclid's algorithm */
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(int a, int b)
{
    return (long long)a / gcd(a, b) * b;
}

int main(void)
{
    int a, b;

    printf("Enter two positive numbers: ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0)
    {
        printf("Please enter two positive numbers.\n");
        return 1;
    }

    printf("GCD = %d\n", gcd(a, b));
    printf("LCM = %lld\n", lcm(a, b));

    return 0;
}
