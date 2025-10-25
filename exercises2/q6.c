#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 9; i++)
    {
        int spaces = (i < 5) ? i : 8 - i;  // 8 = total lines - 1

        for (int k = 0; k < spaces; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}