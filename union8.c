//Declare a union with two integer members. Assign different values to each member and explain why only the last assigned value is retained.

#include <stdio.h>

union Data
{
    int a;
    int b;
};

int main()
{
    union Data data;

    data.a = 10;
    printf("After assigning a: %d\n", data.a);

    data.b = 20;
    printf("After assigning b: %d\n", data.b);

    printf("Value of a after assigning b: %d\n", data.a);

    return 0;
}
