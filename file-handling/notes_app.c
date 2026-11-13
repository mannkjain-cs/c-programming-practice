#include <stdio.h>
#include <string.h>

#define FILENAME "notes.txt"

void add_note(void)
{
    char note[256];
    FILE *fp = fopen(FILENAME, "a");

    if (fp == NULL)
    {
        printf("Could not open %s.\n", FILENAME);
        return;
    }

    printf("Write your note: ");
    if (fgets(note, sizeof(note), stdin) != NULL)
    {
        fputs(note, fp);
        printf("Note saved.\n");
    }

    fclose(fp);
}

void show_notes(void)
{
    char line[256];
    int count = 0;
    FILE *fp = fopen(FILENAME, "r");

    if (fp == NULL)
    {
        printf("No notes yet.\n");
        return;
    }

    printf("\n--- Your notes ---\n");
    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%d. %s", ++count, line);

    if (count == 0)
        printf("No notes yet.\n");

    fclose(fp);
}

int main()
{
    int choice;

    do
    {
        printf("\n1. Add note\n2. Show notes\n3. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1)
            break;
        getchar(); /* consume the leftover newline */

        switch (choice)
        {
        case 1:
            add_note();
            break;
        case 2:
            show_notes();
            break;
        case 3:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 3);

    return 0;
}
