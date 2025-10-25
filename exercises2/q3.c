#include <stdio.h>

int main(void)
{
    int n = 1;
    do
    {
        int result = n * 13;
        printf("%d * 13 = %d\n", n, result);
    } while(n++ < 13);
    return 0;
}