#include <stdio.h>

#define MAX 100

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int swapped = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) /* already sorted, stop early */
            break;
    }
}

void print_array(const int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n, arr[MAX];

    printf("How many numbers (1-%d)? ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX)
    {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Before: ");
    print_array(arr, n);

    bubble_sort(arr, n);

    printf("After:  ");
    print_array(arr, n);

    return 0;
}
