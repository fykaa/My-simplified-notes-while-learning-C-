//Q3. Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)

#include<stdio.h>

int main()
{
    float c, far;
    printf("pls enter value in celcius\n");
    scanf("%f", &c);
    far = (c* 9 / 5 ) + 32 ;
    printf("the value in farhenhite is %f", far );
    return 0 ;

}

