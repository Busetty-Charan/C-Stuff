// Program to calculate the gross salary of an empolyee based on set constraints

#include <stdio.h>

struct employee_table
{
    char name[100], id[10], designation[50], department[50];
    int exp, sal;
};

void get_emp_details(struct employee_table *empp)
{
    printf("Enter your name : ");
    scanf(" %s", empp->name);
    printf("Enter your ID : ");
    scanf(" %s", empp->id);
    printf("How much experience do you have : ");
    scanf(" %d", &empp->exp);
    printf("What are you designated as : ");
    scanf(" %s", empp->designation);
    printf("What department do you belong to : ");
    scanf(" %s", empp->department);
    printf("What is your monthly salary : ");
    scanf(" %d", &empp->sal);
}

int main(int argc, char const *argv[])
{
    struct employee_table emp[5];
    struct employee_table *empp = emp;

    for (int i = 0; i < 5; i++)
    {
        get_emp_details(empp++);
    }

    empp = emp;

    for (int i = 0; i < 5; i++)
    {
        printf("------Employee %d------\n\n", i + 1);
        printf("Name : %s\n", empp->name);
        printf("ID : %s\n", empp->id);
        printf("Experience : %d\n", empp->exp);
        printf("Designation : %s\n", empp->designation);
        printf("Department : %s\n", empp->department);
        printf("Gross Salary : %d\n", empp->sal <= 20000 ? (empp->sal + (9 * (empp->sal / 100)) + (11 * (empp->sal / 100))) : empp->sal <= 30000 ? (empp->sal + (20 * (empp->sal / 100)) + (21 * (empp->sal / 100)))
                                                                                                                                                 : (empp->sal + (25 * (empp->sal / 100)) + (30 * (empp->sal / 100))));
        empp++;
    }

    return 0;
}
