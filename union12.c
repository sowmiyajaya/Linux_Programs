//Create a union with short, int, and long. 
//Print the size of each member and the overall size of the union.

#include <stdio.h>

union Data
{
    short s;
    int i;
    long l;
};

int main()
{
    union Data data;

    printf("Size of short = %lu bytes\n", sizeof(data.s));
    printf("Size of int   = %lu bytes\n", sizeof(data.i));
    printf("Size of long  = %lu bytes\n", sizeof(data.l));
    printf("Size of union = %lu bytes\n", sizeof(data));

    return 0;
}
