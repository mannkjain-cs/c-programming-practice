#include <stdio.h>

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
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nEnter a number to search: ");

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
