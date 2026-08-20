//Define a structure inside a union. Store values and observe how changing one member affects the others.

#include <stdio.h>

union Data
{
    struct
    {
        int id;
        float marks;
    } student;

    int value;
};

int main()
{
    union Data data;

    data.student.id = 101;
    data.student.marks = 85.5;

    printf("Student ID = %d\n", data.student.id);
    printf("Marks = %.2f\n", data.student.marks);

    data.value = 200;

    printf("\nAfter changing union member:\n");
    printf("Value = %d\n", data.value);
    printf("Student ID = %d\n", data.student.id);
    printf("Marks = %.2f\n", data.student.marks);

    return 0;
}
