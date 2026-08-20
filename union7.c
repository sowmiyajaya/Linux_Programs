//Create a menu-driven program that allows the user to enter either an integer, float, or character into a union and display the currently stored value.

#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data data;
    int choice;

    printf("1. Enter Integer\n");
    printf("2. Enter Float\n");
    printf("3. Enter Character\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter integer: ");
            scanf("%d", &data.i);
            printf("Currently stored value = %d\n", data.i);
            break;

        case 2:
            printf("Enter float: ");
            scanf("%f", &data.f);
            printf("Currently stored value = %.2f\n", data.f);
            break;

        case 3:
            printf("Enter character: ");
            scanf(" %c", &data.c);
            printf("Currently stored value = %c\n", data.c);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
