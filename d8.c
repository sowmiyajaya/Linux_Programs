//Define a union containing int id, float marks, and char name[30]. 
//Dynamically allocate memory for N union variables, store one type of data at a time, and display it.

#include <stdio.h>
#include <stdlib.h>

union Data
{
    int id;
    float marks;
    char name[30];
};

int main()
{
    int n, i;
    union Data *ptr;

    printf("Enter number of union variables: ");
    scanf("%d", &n);

    // Dynamically allocate memory for N union variables
    ptr = (union Data *)malloc(n * sizeof(union Data));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nEnter ID for student %d: ", i + 1);
        scanf("%d", &ptr[i].id);
        printf("ID = %d\n", ptr[i].id);

        printf("Enter Marks: ");
        scanf("%f", &ptr[i].marks);
        printf("Marks = %.2f\n", ptr[i].marks);

        printf("Enter Name: ");
        scanf("%s", ptr[i].name);
        printf("Name = %s\n", ptr[i].name);
    }

    free(ptr);

    return 0;
}
