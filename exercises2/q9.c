#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        int spaces = (i < 5) ? i : 8 - i;
        
        for (int j = 0; j < spaces + 1; j++)
        {
            if (j == 0 || j == spaces)
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}