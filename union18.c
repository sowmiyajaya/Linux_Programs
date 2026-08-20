//Write a program to demonstrate that writing to one member of a union changes the data seen through the other members. Explain the observed output.

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

    data.i = 65;

    printf("After writing integer:\n");
    printf("Integer = %d\n", data.i);
    printf("Float   = %f\n", data.f);
    printf("Character = %c\n", data.c);

    data.f = 10.5;

    printf("\nAfter writing float:\n");
    printf("Integer = %d\n", data.i);
    printf("Float   = %f\n", data.f);
    printf("Character = %c\n", data.c);

    return 0;
}
