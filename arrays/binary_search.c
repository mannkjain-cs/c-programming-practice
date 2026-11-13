#include <stdio.h>

#define MAX 100

/* Returns the index of target in a sorted array, or -1 if not found */
int binary_search(const int arr[], int n, int target)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n, arr[MAX], target;

    printf("How many numbers (1-%d)? ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX)
    {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d numbers in ascending order: ", n);
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }
        /* Binary search only works on a sorted array */
        if (i > 0 && arr[i] < arr[i - 1])
        {
            printf("Numbers must be in ascending order.\n");
            return 1;
        }
    }

    printf("Enter a number to search: ");

    if (scanf("%d", &target) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    int index = binary_search(arr, n, target);
    if (index != -1)
        printf("Found %d at index %d.\n", target, index);
    else
        printf("%d is not in the array.\n", target);

    return 0;
}
