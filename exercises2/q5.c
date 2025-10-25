#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 6; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (int j = 6 - i; j > 0; j--)     //why not (int j = 6)? Bc j starts at 6 and'd go down to 1 every time
        {
            printf("*");
        }
        printf("\n");
    }
}