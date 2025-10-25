#include <stdio.h>
void printChars(char c, int count)
{
    int n;
    for (n = 0 ; n < count ; n++) { printf("%c",c); }
}
void printFirstLine()
{
    printChars('*', 7);
    printf("\n");
}
void printSecondLine()
{
    printf("#");
    printf("*");
    printChars(' ', 4);
    printf("*");
    printf("\n");
}
void printMiddleLine(int line)
{
    printf("#");
    printChars(' ', line - 2);
    printf("#");
    printf("*");
    printChars(' ', 5 - line);
    printf("*");
    printf("\n");
}
void printMiddleLines()
{
    int row;
    for (row = 2 ; row < 6 ; row++) { printMiddleLine(row); }
}
void printLastButOneLine()
{
    printf("#");
    printChars(' ', 4);
    printf("#");
    printf("*");
    printf("\n");
}

void printLastLine()
{
    printChars('#', 7);
    printf("\n");
}


int main(void)
{
    printFirstLine();
    printSecondLine();
    printMiddleLines();
    printLastButOneLine();
    printLastLine();

    return 0;
}