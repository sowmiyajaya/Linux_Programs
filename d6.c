//Write a C program to dynamically allocate memory for one structure variable containing roll_no, name, and department. 
//Access the structure members using a structure pointer.

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll_no;
    char name[50];
    char department[50];
};

int main()
{
    struct Student *ptr;

    // Dynamically allocate memory
    ptr = (struct Student *)malloc(sizeof(struct Student));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    // Accessing members using structure pointer
    printf("Enter Roll No: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Department: ");
    scanf("%s", ptr->department);

    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    printf("Department: %s\n", ptr->department);

    // Free allocated memory
    free(ptr);

    return 0;
}
