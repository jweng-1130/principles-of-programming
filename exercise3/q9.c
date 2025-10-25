#include <stdio.h>

void changeTo12Format(int h, int min)
{
    if (h > 12)
    {
        printf("%d.%02dpm\n", h - 12, min);
    } else {
        printf("%d.%dam\n", h, min);
    }
}

int main()
{
    int hours, minutes;
    printf("Enter the time: ");
    scanf("%d:%d", &hours, &minutes);   // lets you type in e.g. "20:18"
    changeTo12Format(hours, minutes);

    return 0;
}