//Write a program to initialize a union during declaration and display all members. 
//Observe which member contains valid data.

#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    // Initialize union during declaration
    union Data data = {10};

    printf("Integer: %d\n", data.i);
    printf("Float: %f\n", data.f);
    printf("Character: %c\n", data.c);

    return 0;
}
