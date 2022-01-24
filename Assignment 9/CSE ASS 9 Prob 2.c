// Program to grade a student

#include <stdio.h>

int main(int argc, char const *argv[])
{
    struct stud
    {
        char name[100], course[100];
        int regno, mark;
    } * some_student, some_stud;

    some_student = &some_stud;

    printf("Enter Name, Regno, Course and Marks in order : ");
    scanf(" %s", some_student->name);
    scanf(" %d", &some_student->regno);
    scanf(" %s", some_student->course);
    scanf(" %d", &some_student->mark);

    if (some_student->mark > 40)
    {
        printf("You have passed\n");
    }
    else
    {
        printf("Please retake the test\n");
    }

    return 0;
}
