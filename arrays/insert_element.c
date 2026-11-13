// Insert an element at a given position in an array
#include <stdio.h>

int main()
{
    int a[100], n, i, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position (1 to %d) and value: ", n + 1);
    scanf("%d %d", &pos, &value);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position\n");
        return 0;
    }

    // shift elements one place to the right, starting from the end
    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
