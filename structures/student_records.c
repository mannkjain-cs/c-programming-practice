// Array of structures: store student records and find the topper
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[50];
    int n, i, top = 0;
    float total = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nRoll\tName\t\tMarks\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%-15s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
        total = total + s[i].marks;
        if (s[i].marks > s[top].marks)
            top = i;
    }

    printf("\nClass average = %.2f\n", total / n);
    printf("Topper: %s with %.2f marks\n", s[top].name, s[top].marks);

    return 0;
}
