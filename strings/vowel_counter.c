#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter a line of text: ");
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 1;

    text[strcspn(text, "\n")] = '\0';

    for (int i = 0; text[i] != '\0'; i++)
    {
        char c = (char)tolower((unsigned char)text[i]);

        if (strchr("aeiou", c) && c != '\0')
            vowels++;
        else if (isalpha((unsigned char)c))
            consonants++;
        else if (isdigit((unsigned char)c))
            digits++;
        else if (c == ' ')
            spaces++;
    }

    printf("Vowels:     %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits:     %d\n", digits);
    printf("Spaces:     %d\n", spaces);

    return 0;
}
