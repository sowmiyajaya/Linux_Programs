//Write a C program to dynamically allocate memory for N strings. 
//Read the names of N students and display them.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    char **names;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Allocate memory for N strings
    names = (char **)malloc(n * sizeof(char *));

    if (names == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    // Allocate memory for each string
    for (i = 0; i < n; i++)
    {
        names[i] = (char *)malloc(50 * sizeof(char));

        if (names[i] == NULL)
        {
            printf("Memory allocation failed");
            return 1;
        }

        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Display the names
    printf("\nStudent Names:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    // Free allocated memory
    for (i = 0; i < n; i++)
    {
        free(names[i]);
    }

    free(names);

    return 0;
}
