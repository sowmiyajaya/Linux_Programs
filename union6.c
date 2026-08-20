//Write a program to compare the memory usage of a structure and a union containing the same members (char, int, float).

#include <stdio.h>

struct Data
{
    char c;
    int i;
    float f;
};

union DataUnion
{
    char c;
    int i;
    float f;
};

int main()
{
    struct Data s;
    union DataUnion u;

    printf("Size of structure = %lu bytes\n", sizeof(s));
    printf("Size of union     = %lu bytes\n", sizeof(u));

    return 0;
}
