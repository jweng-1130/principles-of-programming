#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c)
{
    return a + b + c;
}

double area(double a, double b, double c)
{
    double semi_per = (a + b + c) / 2;
    return sqrt(semi_per * (semi_per - a) * (semi_per - b) * (semi_per - c));

}

int main()
{
    double a,b,c;

    scanf("%lf %lf %lf", &a, &b, &c);
    // double semi_per = (a + b + c) / 2;

    if (a+b > c && a+c > b && b+c > a)
    {
        double p = perimeter(a, b, c);
        double ar = area(a, b, c);

        printf("Perimeter: %.2f\n", p);
        printf("Area: %.2f\n", ar);
    }
    else {
        printf("This does not form a triangle.");
    }

    return 0;
}