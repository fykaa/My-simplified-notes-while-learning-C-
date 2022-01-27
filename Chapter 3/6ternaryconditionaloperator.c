// Conditional operators

// A shorthand “if-else” can be written using conditional or ternary operators.

// Condition ?
// expression-if-true ; 
// expression-if-false

// Here, '?' and ':' are Ternary operators.


// #include<stdio.h>

// int main()
// {

//     int a;
//     printf("enter a\n");
//     scanf("%d", &a);

//     (a<5)? printf("a is less than 5"): printf("a is not less than 5");
//     return 0; 

// }

// (yaha condition likho)
// ? iska matlab h if your condition is true then do the following
// : iska matlab h if your condition is false then do the following



#include<stdio.h>

int main()
{
    int age;
    printf("age bataye\n");
    scanf("%d", &age);

    (age>18 && age<90)? printf("wow you can drive") : printf("sorry you cant drive");

    return 0; 

}