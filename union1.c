//Write a C program to declare a union containing an integer, a floating-point number, and a character. 
//Assign values to each member one at a time and display the results.

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

    data.i = 10;
    printf("Integer: %d\n", data.i);

    data.f = 25.5;
    printf("Float: %.2f\n", data.f);

    data.c = 'A';
    printf("Character: %c\n", data.c);

    return 0;
}
