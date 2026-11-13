// Write, append and read a text file
#include <stdio.h>

int main()
{
    FILE *fp;
    char line[200];
    int n, i;

    // write mode: creates the file (or erases the old one)
    fp = fopen("notes.txt", "w");
    if (fp == NULL)
    {
        printf("File could not be opened\n");
        return 1;
    }

    printf("How many lines do you want to write? ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Line %d: ", i);
        scanf(" %[^\n]", line);
        fprintf(fp, "%s\n", line);
    }
    fclose(fp);

    // append mode: adds to the end without erasing
    fp = fopen("notes.txt", "a");
    printf("Enter a line to append: ");
    scanf(" %[^\n]", line);
    fprintf(fp, "%s\n", line);
    fclose(fp);

    // read mode: print the whole file
    fp = fopen("notes.txt", "r");
    printf("\nContents of notes.txt:\n");
    while (fgets(line, 200, fp) != NULL)
        printf("%s", line);
    fclose(fp);

    return 0;
}
