//Develop a program to print the memory address of every member of a union and verify whether all members point to the same memory location

#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
    double d;
};

int main()
{
    union Data data;

    printf("Address of int    : %p\n", (void *)&data.i);
    printf("Address of float  : %p\n", (void *)&data.f);
    printf("Address of char   : %p\n", (void *)&data.c);
    printf("Address of double : %p\n", (void *)&data.d);

    if ((void *)&data.i == (void *)&data.f &&
        (void *)&data.f == (void *)&data.c &&
        (void *)&data.c == (void *)&data.d)
    {
        printf("\nAll members have the same memory address.\n");
    }
    else
    {
        printf("\nMembers have different memory addresses.\n");
    }

    return 0;
}
