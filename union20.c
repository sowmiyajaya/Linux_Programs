//Design a simple application where a union stores either an integer, float, or character based on the user's choice. Use an additional variable to indicate which type is currently stored and display the correct value.

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
    int type;

    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. Character\n");

    printf("Enter your choice: ");
    scanf("%d", &type);

    switch (type)
    {
        case 1:
            printf("Enter integer: ");
            scanf("%d", &data.i);
            break;

        case 2:
            printf("Enter float: ");
            scanf("%f", &data.f);
            break;

        case 3:
            printf("Enter character: ");
            scanf(" %c", &data.c);
            break;

        default:
            printf("Invalid choice\n");
            return 0;
    }

    printf("\nStored Value: ");

    switch (type)
    {
        case 1:
            printf("%d\n", data.i);
            break;

        case 2:
            printf("%.2f\n", data.f);
            break;

        case 3:
            printf("%c\n", data.c);
            break;
    }

    return 0;
}
