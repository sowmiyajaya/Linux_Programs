//Create a union with an integer and a character array. Read an integer from the user and display its individual bytes using the character array.

#include <stdio.h>

union Data
{
    int num;
    unsigned char bytes[sizeof(int)];
};

int main()
{
    union Data data;
    int i;

    printf("Enter an integer: ");
    scanf("%d", &data.num);

    printf("Individual bytes of the integer:\n");

    for (i = 0; i < sizeof(int); i++)
    {
        printf("Byte %d = %u\n", i + 1, data.bytes[i]);
    }

    return 0;
}
