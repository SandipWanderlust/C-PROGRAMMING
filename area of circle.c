#include <stdio.h>

int main () {
    float radius,Area;
    printf("enter the radius,r=? ");
    scanf("%f",&radius);
    Area=3.1415926535897932384626433832795*radius*radius;
    printf("the area of the circle with radius %.0f is %f",radius,Area);
    return 0;
}
