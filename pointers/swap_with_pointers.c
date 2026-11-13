#include <stdio.h>

/* Swaps two integers using their addresses */
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}
