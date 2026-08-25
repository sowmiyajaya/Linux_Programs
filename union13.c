//Write a function that accepts a union as an argument and displays the currently stored value.

#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};
void display(union Data data, int type)
{
    if (type == 1)
        printf("Currently stored value = %d\n", data.i);
    else if (type == 2)
        printf("Currently stored value = %.2f\n", data.f);
    else if (type == 3)
        printf("Currently stored value = %c\n", data.c);
}

int main()
{
    union Data data;

    data.i = 100;
    display(data, 1);

    data.f = 25.5;
    display(data, 2);

    data.c = 'A';
    display(data, 3);

    return 0;
}
