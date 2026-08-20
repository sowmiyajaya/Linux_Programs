//Modify a structure-based program by replacing the structure with a union. 
//Compare the program's output and memory usage.

#include <stdio.h>

struct Data
{
    int id;
    float marks;
    char grade;
};

int main()
{
    struct Data data;

    data.id = 101;
    data.marks = 85.5;
    data.grade = 'A';

    printf("ID = %d\n", data.id);
    printf("Marks = %.2f\n", data.marks);
    printf("Grade = %c\n", data.grade);

    printf("Memory used = %lu bytes\n", sizeof(data));

    return 0;
}


