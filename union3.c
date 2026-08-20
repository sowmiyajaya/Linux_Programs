//Create a union with int and float members. Assign a value to the integer member and then assign a value to the float member. 
//Observe and explain why the integer value changes.

#include <stdio.h>

union Data
{
    int i;
    float f;
};

int main()
{
    union Data data;

    data.i = 10;
    printf("After assigning integer:\n");
    printf("Integer = %d\n", data.i);

    data.f = 25.5;
    printf("\nAfter assigning float:\n");
    printf("Float = %.2f\n", data.f);
    printf("Integer = %d\n", data.i);

    return 0;
}
