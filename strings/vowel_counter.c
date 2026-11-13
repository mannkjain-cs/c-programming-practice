// Count vowels, consonants, digits and spaces in a string
#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, v = 0, c = 0, d = 0, s = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);      // reads the whole line, including spaces

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];
        if (ch >= 'A' && ch <= 'Z')     // uppercase to lowercase
            ch = ch + 32;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            v++;
        else if (ch >= 'a' && ch <= 'z')
            c++;
        else if (ch >= '0' && ch <= '9')
            d++;
        else if (ch == ' ')
            s++;
    }

    printf("Vowels = %d\n", v);
    printf("Consonants = %d\n", c);
    printf("Digits = %d\n", d);
    printf("Spaces = %d\n", s);

    return 0;
}
