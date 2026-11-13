#include <stdio.h>

int main(void)
{
    int terms;
    long long a = 0, b = 1;

    printf("How many Fibonacci terms? ");
    if (scanf("%d", &terms) != 1 || terms < 1 || terms > 90)
    {
        printf("Please enter a number between 1 and 90.\n");
        return 1;
    }

    for (int i = 0; i < terms; i++)
    {
        printf("%lld ", a);
        long long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");

    return 0;
}
