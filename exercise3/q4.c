#include <stdio.h>

int multiplication(int x, int y)
{
    int result = 1;
    for (int i = x; i <= y; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", multiplication(a, b));

    return 0;
}