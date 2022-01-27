//// Q2. Calculate the area of a circle and 
//modify the same program to calculate the volume of a cylinder 
//given its radius and height.

#include<stdio.h>

int main()
{
    int r, h;
    printf("RADIUS\n");
    scanf("%d", &r);

    printf("Height\n");
    scanf("%d", &h );

    float p = 3.14;
    printf("the area of circle is %f\n", p * r * r);
    printf("the volume of cylinder is %f\n", p*r*r*h);
    return 0 ;

}