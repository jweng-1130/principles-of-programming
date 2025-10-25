#include <stdio.h>

int main()
{
    long x, temp, reversed_x = 0, digit;
    scanf("%ld", &x);
    temp = x;

    while (temp > 0) {
        digit = temp % 10;  // get the last digit
        reversed_x = reversed_x * 10 + digit;
        
        temp = temp / 10;   // remove the last digit
    }

    printf("The reversed form of this number is: %ld\n", reversed_x);

    if (x == reversed_x)
    {
        printf("Yes, this is a palindrome number.");
    } else {
        printf("This is not a palindrome number.");
    }

    return 0;
}