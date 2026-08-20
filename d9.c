//Write a C program to dynamically allocate memory for an array of N structures, where each structure contains a dynamically allocated name. 
//Read and display student details.

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll_no;
    char *name;
    float marks;
};

int main()
{
    int n, i;

    struct Student *ptr;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Allocate memory for N structures
    ptr = (struct Student *)malloc(n * sizeof(struct Student));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    // Read student details
    for (i = 0; i < n; i++)
    {
        ptr[i].name = (char *)malloc(50 * sizeof(char));

        if (ptr[i].name == NULL)
        {
            printf("Memory allocation failed");
            return 1;
        }

        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &ptr[i].roll_no);

        printf("Name: ");
        scanf("%s", ptr[i].name);

        printf("Marks: ");
        scanf("%f", &ptr[i].marks);
    }

    // Display student details
    printf("\nStudent Details:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: %d\n", ptr[i].roll_no);
        printf("Name: %s\n", ptr[i].name);
        printf("Marks: %.2f\n", ptr[i].marks);
    }

    // Free memory allocated for each name
    for (i = 0; i < n; i++)
    {
        free(ptr[i].name);
    }

    // Free memory allocated for structures
    free(ptr);

    return 0;
}
