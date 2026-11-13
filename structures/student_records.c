#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main(void)
{
    struct Student students[MAX_STUDENTS];
    int n;

    printf("How many students (1-%d)? ", MAX_STUDENTS);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_STUDENTS)
    {
        printf("Invalid number.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll no: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    int top = 0;
    float total = 0;
    for (int i = 0; i < n; i++)
    {
        total += students[i].marks;
        if (students[i].marks > students[top].marks)
            top = i;
    }

    printf("\n%-8s %-20s %s\n", "Roll", "Name", "Marks");
    for (int i = 0; i < n; i++)
        printf("%-8d %-20s %.2f\n", students[i].roll_no, students[i].name, students[i].marks);

    printf("\nClass average: %.2f\n", total / n);
    printf("Topper: %s (%.2f)\n", students[top].name, students[top].marks);

    return 0;
}
