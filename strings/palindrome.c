#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Checks for a palindrome, ignoring case, spaces and punctuation */
int is_palindrome(const char *s)
{
    int left = 0, right = (int)strlen(s) - 1;

    while (left < right)
    {
        if (!isalnum((unsigned char)s[left]))
            left++;
        else if (!isalnum((unsigned char)s[right]))
            right--;
        else
        {
            if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right]))
                return 0;
            left++;
            right--;
        }
    }
    return 1;
}

int main(void)
{
    char text[200];

    printf("Enter a word or sentence: ");
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 1;

    text[strcspn(text, "\n")] = '\0'; /* remove the newline */

    if (is_palindrome(text))
        printf("\"%s\" is a palindrome.\n", text);
    else
        printf("\"%s\" is not a palindrome.\n", text);

    return 0;
}
