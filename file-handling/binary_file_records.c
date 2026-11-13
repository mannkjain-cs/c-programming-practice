// Store student records in a binary file and search by roll number
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    int n, i, key, found = 0;

    // write records with fwrite
    fp = fopen("students.dat", "wb");
    if (fp == NULL)
    {
        printf("File could not be opened\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter roll, name and marks of student %d: ", i + 1);
        scanf("%d %s %f", &s.roll, s.name, &s.marks);
        fwrite(&s, sizeof(s), 1, fp);
    }
    fclose(fp);

    // read records with fread and search
    printf("Enter roll number to search: ");
    scanf("%d", &key);

    fp = fopen("students.dat", "rb");
    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.roll == key)
        {
            printf("Found: Roll %d, Name %s, Marks %.2f\n", s.roll, s.name, s.marks);
            found = 1;
            break;
        }
    }
    fclose(fp);

    if (found == 0)
        printf("Record not found\n");

    return 0;
}
