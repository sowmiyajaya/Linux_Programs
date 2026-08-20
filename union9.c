//Write a program that stores a student's roll number, CGPA, and grade in a union. 
//Explain why this is not a suitable design for storing all three values simultaneously.

#include <stdio.h>

union Student
{
    int roll_no;
    float cgpa;
    char grade;
};

int main()
{
    union Student student;

    student.roll_no = 101;
    printf("Roll Number: %d\n", student.roll_no);

    student.cgpa = 8.5;
    printf("CGPA: %.2f\n", student.cgpa);

    student.grade = 'A';
    printf("Grade: %c\n", student.grade);

    printf("\nAfter assigning grade:\n");
    printf("Roll Number: %d\n", student.roll_no);
    printf("CGPA: %.2f\n", student.cgpa);
    printf("Grade: %c\n", student.grade);

    return 0;
}
