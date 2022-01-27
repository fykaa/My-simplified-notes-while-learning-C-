// TYPE CONVERSION

// An Arithmetic operation between
    // int and int     will give a ==> int
    // int and float   will give a ==> float
    // float and float will give a ==> float

// 5/2 --> 2               5.0/2 --> 2.5 //IMPORTANT!! //here int and int is giving a float
// 2/5 --> 0               2.0/5 --> 0.4 //IMPORTANT!! 

#include<stdio.h>

int main()
{
    printf("the value of 6+5 is %d\n", 6+5);            //int int ke liye %d liya
    printf("the value of 6+5.6 is %.1f\n", 6+5.6);        //int float k liye %f liya
    printf("the value of 6.1+5.6 is %.1f\n", 6.1+5.6);    //float float ke liye %d liya
    printf("the value of 5/2 is %d\n", 5/2);            //because we used a    %d it showed just 2 and not 2.5
    printf("5 divided by 2 is %.3f\n", 5/2);                // error dega because int / int cant give float here now-----------------------------
    printf("5.0 divided by 2 is %.3f", 5.0/2);              // will give correct value because float and int can give FLOAT!!!!!!!!!!!!!!!!!11
    return 0;
}

// SO THIS IS HOW I WORKS
    // int a = 3.5; //In this case, 3.5 (float) will be denoted to a 3 (int) because a cannot store floats.

    // float a = 8; // a will store 8.0 [8-->8.0(Promotion to float)]

//SO,
// Question- IF int k = 3.0/9 THEN value of k? and why?
// Solution- 3.0/9=0.333, but since k is an int, it cannot store floats & value 0.33 is denoted to 0.


// IMPORTANT ASF
// int/int can never give float!!!
// ONLY float / int CAN give flaot!!