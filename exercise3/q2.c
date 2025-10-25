#include <stdio.h>

int power_loop(int x, int y)
{
    int result = 1;
    for (int i = 0; i < y; i++)
    {
        result = result * x;
    }
    return result;
}

int power_recursion(int b, int p)
{
    if (p == 0)
    {
        return 1;
    }
    
    return b * power_recursion(b, p-1);
}

int main()
{
    printf("%d\n", power_loop(4, 3));
    printf("%d\n", power_recursion(6,2));

    return 0;
}