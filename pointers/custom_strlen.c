// Find the length of a string with a pointer: custom_strlen()
#include <stdio.h>

int custom_strlen(char *s);

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Length = %d\n", custom_strlen(str));

    return 0;
}

int custom_strlen(char *s)
{
    int count = 0;

    while (*s != '\0')  // move the pointer until the null character
    {
        count++;
        s++;
    }
    return count;
}
