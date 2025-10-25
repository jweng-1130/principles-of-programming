// drawRect(int left, int top, int right, int bottom)
// drawLine(int start_x, int start_y, int end_x, int end_y)
#include "graphics.h"

int main(void)
{
    drawRect(30, 30, 120, 80);
    drawLine(150, 150, 210, 150);
    drawLine(210, 150, 210, 290);
    drawLine(210, 290, 150, 290);
    drawLine(150, 290, 150, 150);

    return 0;
}