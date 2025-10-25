#include <stdio.h>

int main(void)
{
    int n = 0;
    while (++n <= 13)
    {
        int result = n * 13;
        printf("%d * 13 = %d\n", n, result);
    }
    return 0;
}