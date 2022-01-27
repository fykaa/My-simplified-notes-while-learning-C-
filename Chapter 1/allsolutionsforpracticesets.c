


// Chapter 1: Practice Set:
// Q1. Write a c program to calculate the area of a rectangle:


// a) using hardcoded inputs & 

// b) using inputs supplied by the user


// Q2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

// Q3. Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)

// Q4. Write a program to calculate simple interest for a set of values representing principle, no of years, and rate of interest.




//ANSWER1;

// #include<stdio.h>

// int main()
// {
//     int length, breadth;
//     printf("length");
//     scanf("%d", &length);

//     printf("breadth");
//     scanf("%d", &breadth);

//     printf("area of rectangle is %d", length * breadth);
//     return 0; 

// }


//ANSWER 2

// #include<stdio.h>

// int main()
// {
//     int radius, height;
//     printf("radius\n");
//     scanf("%d", &radius);

//     float p = 3.14;

//     printf("area of circle is %f \n", p* radius*radius);

//     printf("height\n");
//     scanf("%d", &height);

//     printf("the volume of cylinder is %f", p*radius*radius*height);
//     return 0; 

// }




//ANSWER 3

// #include<stdio.h>

// int main()
// {
//     float celcius, far;
//     printf("enter value in celcius\n");
//     scanf("%f", &celcius);

//     far = (celcius *9 / 5) + 32 ;
//     printf("in farhenhite the value will be %f", far);
//     return 0; 

// }



//ANSWER 4 

#include<stdio.h>

int main()
{
    int simpleinterest, principal, rate, year;
    printf("principal\n");
    scanf("%d", &principal);
    printf("rate\n");
    scanf("%d", &rate);

    printf("year\n");
    scanf("%d", &year);

    simpleinterest = (principal*rate*year)/100;
    printf("the simple interest is %d", simpleinterest);
    return 0; 

}