//Create a union containing an integer and a character array. 
//Store an integer value and print the character array. 
//Observe the output and explain the result.

#include <stdio.h>

union Data
{
    int num;
    char ch[4];
};

int main()
{
    union Data data;

    data.num = 65;

    printf("Integer value: %d\n", data.num);

    printf("Character array: ");

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", (unsigned char)data.ch[i]);
    }

    printf("\n");

    return 0;
}
