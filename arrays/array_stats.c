#include <stdio.h>

#define MAX 100

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

    int min = arr[0], max = arr[0];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Sum     = %lld\n", sum);
    printf("Average = %.2f\n", (double)sum / n);
    printf("Min     = %d\n", min);
    printf("Max     = %d\n", max);

    return 0;
}
