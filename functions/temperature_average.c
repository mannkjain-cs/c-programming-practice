// Celsius to Fahrenheit conversion and average of an array using functions
#include <stdio.h>

float convertToFahrenheit(float c);
float findAverage(int a[], int n);

int main()
{
    float c;
    int a[100], n, i;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    printf("Fahrenheit = %.2f\n", convertToFahrenheit(c));

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Average = %.2f\n", findAverage(a, n));

    return 0;
}

float convertToFahrenheit(float c)
{
    return (c * 9.0 / 5) + 32;  // 9.0 avoids integer division
}

float findAverage(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum = sum + a[i];

    return (float)sum / n;
}
