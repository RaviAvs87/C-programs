#include <stdio.h>

int main()
{
    float radius, height;
    printf("Enter radius\n");
    scanf("%f", &radius);

    printf("Enter height\n");
    scanf("%f", &height);

    printf("The area of circle with radius %f is %f\n", radius, 3.14*radius*radius);
    printf("The volume of cylinder with radius %f and height %f is %f\n", radius, height, 3.14*radius*radius*height);

    return 0;
}