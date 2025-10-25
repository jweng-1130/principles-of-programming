#include <stdio.h>

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

void printStrongNumber(int start, int end)   // 123
{

    for (int i = start; i <= end; i++)
    {
        int result = 0; 
        int temp = i;
        while (temp > 0)
        {
            result = result + factorial(temp % 10);
            temp /= 10;
        }
    
        if (result == i) 
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    printStrongNumber(1, 40586);

    return 0;
}