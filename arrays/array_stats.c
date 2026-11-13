// Sum, average, largest and smallest element of an array
#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0, max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];
    min = a[0];

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / n);
    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);

    return 0;
}
