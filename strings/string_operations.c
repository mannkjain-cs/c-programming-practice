// Length, copy, concatenate, reverse and toggle case without string.h
#include <stdio.h>

int main()
{
    char s1[100], s2[100], copy[100], joined[200], rev[100];
    int i, j, len = 0;

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    // length (like strlen)
    while (s1[len] != '\0')
        len++;
    printf("Length of first string = %d\n", len);

    // copy (like strcpy)
    for (i = 0; s1[i] != '\0'; i++)
        copy[i] = s1[i];
    copy[i] = '\0';
    printf("Copied string = %s\n", copy);

    // concatenate (like strcat)
    for (i = 0; s1[i] != '\0'; i++)
        joined[i] = s1[i];
    for (j = 0; s2[j] != '\0'; j++)
        joined[i + j] = s2[j];
    joined[i + j] = '\0';
    printf("Concatenated string = %s\n", joined);

    // reverse (like strrev)
    for (i = 0; i < len; i++)
        rev[i] = s1[len - 1 - i];
    rev[len] = '\0';
    printf("Reversed string = %s\n", rev);

    // toggle case
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            s1[i] = s1[i] - 32;
        else if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] = s1[i] + 32;
    }
    printf("Toggled case = %s\n", s1);

    return 0;
}
