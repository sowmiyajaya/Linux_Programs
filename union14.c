//Write a function that returns a union after assigning a value to one of its members. 
//Display the returned value in the calling function.

#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

// Function returns a union
union Data getData()
{
    union Data data;

    data.i = 100;

    return data;
}

int main()
{
    union Data result;

    result = getData();

    printf("Returned value = %d\n", result.i);

    return 0;
}
