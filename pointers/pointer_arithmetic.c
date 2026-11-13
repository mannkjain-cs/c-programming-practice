// Accessing array elements with pointer arithmetic
#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", a + i);         // a + i is the same as &a[i]

    p = a;                          // p points to a[0]

    printf("Element\tValue\tAddress\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]\t%d\t%p\n", i, *(p + i), (void *)(p + i));
        sum = sum + *(p + i);       // *(p + i) is the same as a[i]
    }

    printf("Sum using pointer = %d\n", sum);

    printf("Array in reverse: ");
    for (p = a + n - 1; p >= a; p--)
        printf("%d ", *p);
    printf("\n");

    return 0;
}
