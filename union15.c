//Create an array of unions where each union stores either an integer or a character. 
//Accept values from the user and display them.

#include <stdio.h>

union Data
{
    int i;
    char c;
};

int main()
{
    union Data data[10];
    int n, i, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nElement %d\n", i + 1);
        printf("1. Integer\n");
        printf("2. Character\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter integer: ");
            scanf("%d", &data[i].i);
        }
        else if (choice == 2)
        {
            printf("Enter character: ");
            scanf(" %c", &data[i].c);
        }
        else
        {
            printf("Invalid choice\n");
            i--;
        }
    }

    printf("\n--- Stored Values ---\n");

    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);

        /*
         * Since a union does not remember which member
         * was assigned, this simple program needs a
         * separate variable to track the type.
         */
    }

    return 0;
}


