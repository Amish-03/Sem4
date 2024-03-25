#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

float calculateRectangleArea(float length, float width);
float calculateTriangleArea(float base, float height);
float calculateCircleArea(float radius);

int main()
{
    int choice;
    float area=0;
    FILE *ptr;
    ptr=fopen("Area.txt","w");
    printf("Select the shape:\n");
    printf("1. Rectangle\n");
    printf("2. Triangle\n");
    printf("3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            {
                float length, width;
                printf("Enter length and width of the rectangle: ");
                scanf("%f %f", &length, &width);
                area=calculateRectangleArea(length, width);
                break;
            }
        case 2:
            {
                float base, height;
                printf("Enter base and height of the triangle: ");
                scanf("%f %f", &base, &height);
                area=calculateTriangleArea(base, height);
                break;
            }
        case 3:
            {
                float radius;
                printf("Enter radius of the circle: ");
                scanf("%f", &radius);
                area=calculateCircleArea(radius);
                break;
            }
        default:
            printf("Invalid choice!\n");
    }
    fprintf(ptr,"Area= %.2f",area);
    fclose(ptr);


    return 0;
}


float calculateRectangleArea(float length, float width)
 {
    return length * width;
}


float calculateTriangleArea(float base, float height)
{
    return 0.5 * base * height;
}


float calculateCircleArea(float radius)
{
    return PI * radius * radius;
}

