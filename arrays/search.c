// Linear search and binary search in an array
#include <stdio.h>

int main()
{
    int a[100], n, i, key, pos = -1, low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in ascending order: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search: check every element one by one
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
        printf("Linear search: %d not found\n", key);
    else
        printf("Linear search: %d found at position %d\n", key, pos + 1);

    // Binary search: works only on a sorted array
    low = 0;
    high = n - 1;
    pos = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            pos = mid;
            break;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (pos == -1)
        printf("Binary search: %d not found\n", key);
    else
        printf("Binary search: %d found at position %d\n", key, pos + 1);

    return 0;
}
