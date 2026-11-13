// Call by value vs call by address (swapping two numbers)
#include <stdio.h>

void swapByValue(int x, int y);
void swapByAddress(int *x, int *y);

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swapByValue(a, b);
    printf("After call by value:   a = %d, b = %d\n", a, b);   // unchanged

    swapByAddress(&a, &b);
    printf("After call by address: a = %d, b = %d\n", a, b);   // swapped

    return 0;
}

void swapByValue(int x, int y)      // x and y are copies
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapByAddress(int *x, int *y)  // x and y hold the addresses of a and b
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
