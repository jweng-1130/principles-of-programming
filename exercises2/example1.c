#include <stdio.h>

int main(void)
{
    int n = 0;
    while (n < 10)
    {
        printf("%d: A message\n", n+1);
        n++;
    }
    return 0;
}