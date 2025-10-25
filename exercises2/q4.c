#include <stdio.h>

int main(void)
{
    int row = 4;
    int column = 4;
    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= column; j++)
        {
            if (j == 0 || j == column || i == 0 || i == row)
            {
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}