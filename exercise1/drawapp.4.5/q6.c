#include "graphics.h"
#include <math.h>

int main(void)
{
    double h = 50 * sqrt(2);
    drawArc(120, 50, 200, 200, 0, 360);
    drawRect(220 - h, 150 - h, 220 + h, 150 + h);

    return 0;
}