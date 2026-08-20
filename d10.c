//Write a C program to dynamically allocate memory for N student records.
//Each record should contain id, dynamically allocated name, marks, and a union containing either phone or email. 
//Display all records and release the allocated memory.

#include <stdio.h>
#include <stdlib.h>

union Contact
{
    char phone[15];
    char email[50];
};

struct Student
{
    int id;
    char *name;
    float marks;
    union Contact contact;
};

int main()
{
    int n, i, choice;
    struct Student *ptr;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Allocate memory for N student records
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

        printf("ID: ");
        scanf("%d", &ptr[i].id);

        printf("Name: ");
        scanf("%s", ptr[i].name);

        printf("Marks: ");
        scanf("%f", &ptr[i].marks);

        printf("Enter 1 for Phone or 2 for Email: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Phone: ");
            scanf("%s", ptr[i].contact.phone);
        }
        else
        {
            printf("Email: ");
            scanf("%s", ptr[i].contact.email);
        }
    }

    // Display student details
    printf("\n--- Student Records ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("ID: %d\n", ptr[i].id);
        printf("Name: %s\n", ptr[i].name);
        printf("Marks: %.2f\n", ptr[i].marks);

        printf("Contact: ");

        /*
         * Since union stores only one member at a time,
         * the entered choice is needed to know whether
         * phone or email was stored.
         */
        if (choice == 1)
            printf("%s\n", ptr[i].contact.phone);
        else
            printf("%s\n", ptr[i].contact.email);
    }

    // Release memory
    for (i = 0; i < n; i++)
    {
        free(ptr[i].name);
    }

    free(ptr);

    return 0;
}
