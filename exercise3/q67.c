#include <stdio.h>
#include <math.h>
#include <string.h>

int isPrime(long n)
{
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    for (int i = 3; i <= sqrt(n); i++)
    {
        if (n % i == 0) return 0;   
    }

    return 1;  
}

// question 7
void printTwinPrime(int start, int end)
{
    for(int i = start; i <= end; i++)
    {
        if (i == 2) printf("(%d, %d)\n", 2, 3);
        if (isPrime(i) && isPrime(i+2)) printf("(%d, %d)\n", i, i+2);
    }
}

int main()
{
    char input[30], extra;
    long num;

    // question 7
    printTwinPrime(1, 100);

    // question 6
    while (1)
    {
        printf("Enter a number (or 'stop' to quit): ");
        scanf("%s", input);

        if (strcmp(input, "stop") == 0)     //strcmp() compares two strings, returns 0 if the same
            break;

        // Checking for invalid long number
        if (sscanf(input, "%ld %c", &num, &extra) != 1)  // %c for char data type
        {
            printf("Invalid input. Please enter digits only.\n");
            continue;
        }

        if (isPrime(num))
            printf("%ld is a prime number.\n", num);
        else
            printf("%ld is not a prime number.\n", num);
    }

    printf("Programme stopped.");
    return 0;
}
