// Passing a structure to a function using a pointer (-> operator)
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void giveRaise(struct Employee *e, float percent);
void display(struct Employee e);

int main()
{
    struct Employee emp;
    float percent;

    printf("Enter employee id, name and salary: ");
    scanf("%d %s %f", &emp.id, emp.name, &emp.salary);

    printf("Enter raise percentage: ");
    scanf("%f", &percent);

    printf("\nBefore raise:\n");
    display(emp);

    giveRaise(&emp, percent);

    printf("After raise:\n");
    display(emp);

    return 0;
}

void giveRaise(struct Employee *e, float percent)
{
    e->salary = e->salary + e->salary * percent / 100;  // e->salary is (*e).salary
}

void display(struct Employee e)
{
    printf("ID: %d, Name: %s, Salary: %.2f\n", e.id, e.name, e.salary);
}
