#include <stdio.h>

int main(void)
{
    for (int i = 1; i<7; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (i % 2 == 1)
            {
                printf("*");
                printf("#");
            } else {
                printf("#");
                printf("*");
            }
        } 
        printf("\n");
    }
    return 0;
}