//Define a union inside a structure. Store employee ID in the structure and either salary (float) or grade (char) in the union. 
//Display the stored information.

#include <stdio.h>

union Details
{
    float salary;
    char grade;
};

struct Employee
{
    int id;
    union Details data;
};

int main()
{
    struct Employee emp;
    int choice;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("1. Salary\n");
    printf("2. Grade\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter Salary: ");
        scanf("%f", &emp.data.salary);

        printf("\nEmployee Information\n");
        printf("Employee ID: %d\n", emp.id);
        printf("Salary: %.2f\n", emp.data.salary);
    }
    else if (choice == 2)
    {
        printf("Enter Grade: ");
        scanf(" %c", &emp.data.grade);

        printf("\nEmployee Information\n");
        printf("Employee ID: %d\n", emp.id);
        printf("Grade: %c\n", emp.data.grade);
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}


