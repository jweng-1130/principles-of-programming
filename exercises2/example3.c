#include <stdio.h>

int main(void)
{
    int n = 0;
    do
    {
        printf("%d: A message\n", n+1);
    } while(n++ < 10);
    return 0;
}