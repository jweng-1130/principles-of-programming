#include <stdio.h>

int main(void)
{
    for (int n = 1; n <= 13; n++)
    {
        int result = n * 13;
        printf("%d * 13 = %d\n", n, result);
    }
    return 0;
}