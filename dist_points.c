#include <stdio.h>
#include <math.h>

struct Point
{
    float x;
    float y;
};

float distanceFromOrigin(struct Point p)
{
    return sqrt(p.x*p.x+p.y*p.y);
}

int main()
{
    struct Point p={3.0,4.0};
    printf("Distance from origin is %.2f\n", distanceFromOrigin(p));
    return 0;
}

