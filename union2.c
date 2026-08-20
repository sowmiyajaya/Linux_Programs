//Write a program to determine the size of a union containing char, int, float, and double. 
//Explain why the size is equal to its largest member.

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
