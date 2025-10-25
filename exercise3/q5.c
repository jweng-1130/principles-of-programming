#include <stdio.h>

void single(int n) 
{
    char *names[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("%s", names[n]);
}

void teens(int n) 
{
    char *names[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    printf("%s", names[n - 10]);
}

void tens(int n) 
{
    char *names[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    printf("%s", names[n]);
}

void verbalise(int n)
{
    if (n < 0 || n > 999) 
    {
        printf("Number out of range.");
        return;
    }

    if (n < 10)
    {
        single(n);
    } else if (n < 20) {
        teens(n);
    } else if (n < 100) {
        tens(n / 10);
        if (n % 10 != 0) 
        {
            printf(" ");
            single(n % 10);
        }
    } else {
        single(n / 100);
        printf(" hundred");
        if (n % 100 != 100)
        {
            printf(" and ");
            verbalise(n % 100);
        }
    }
}

int main()
{
    int number;
    scanf("%d", &number);

    verbalise(number);

    return 0;
}