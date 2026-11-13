// Reverse a number, find the sum of its digits, and check if it is a palindrome
#include <stdio.h>

int main()
{
    int n, original, digit, rev = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        digit = n % 10;         // last digit
        rev = rev * 10 + digit; // add it to the reverse
        sum = sum + digit;
        n = n / 10;             // remove last digit
    }

    printf("Reverse = %d\n", rev);
    printf("Sum of digits = %d\n", sum);

    if (original == rev)
        printf("%d is a palindrome\n", original);
    else
        printf("%d is not a palindrome\n", original);

    return 0;
}
