#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("How many numbers? ");
    if (scanf("%d", &n) != 1 || n < 1)
    {
        printf("Invalid size.\n");
        return 1;
    }

    /* Allocate memory at runtime instead of using a fixed-size array */
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", arr + i) != 1)
        {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
    }

    printf("In reverse order: ");
    for (int *p = arr + n - 1; p >= arr; p--)
        printf("%d ", *p);
    printf("\n");

    free(arr);
    return 0;
}
