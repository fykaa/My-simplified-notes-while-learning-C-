//ARITHEMATIC INSTRUCTIONS

//it has some arithematic operators

// #include<stdio.h>

// int main()
// {
//     int a = 12;
//     int b = 4;
//     printf("the value of a + b is: %d\n", a + b);
//     printf("the value of a - b is: %d\n", a - b);
//     printf("the value of a * b is: %d\n", a * b);
//     printf("the value of a / b is: %d\n", a / b); 
//     return 0; 

// }


//here a and b are OPERANDS
//here + - * / are OPERATORS
//OPERANDS can be int or float etc.
//+ - * / are arithematic operators.




// #include<stdio.h>

// int main()
// {
    
//     int a = 12;
//     int b = 4;
//     int z;
//     z = b*a;      //legal      //this is legal and can be written in this format 
//     b*a = z;      //illegal    //THIS IS ILLEGAL AND CANT BE DONE , as b*a ki value ko z karna hai an dz is not defined
//     printf("the value of z is %d", z);
//     return 0;

// }


// ANOTHER TYPE OF OPERATOR IN ARITHEMATIC used for finding remainder

// %---->   Modular Devision Operator
// %---->   Returns the Remainder
// %---->   cannot be applied on float
// %---->   sign is as same as of numerator 
    // i.e. 
    //     5%2=1 and 
    //     -5%2=-1 and 
    //     5%-2=1


//proof

#include<stdio.h>

int main()
{
    printf("remainder when 5 divided by 2 is %d\n", 5%2 );  //sign is as same as of numerator 
    printf("remainder when 5 divided by 2 is %d\n", -5%2 ); //sign is as same as of numerator 
    printf("remainder when 5 divided by 2 is %d\n", 5%-2 ); //sign is as same as of numerator 
    return 0; 

}


// Note:

// 1.No operator is assumed to be present

//     int i=ab  ( Invalid )

//     int i=a*b  ( valid )

// 2.There is no operator to perform exponentiation in c however we can use pow(x,y) from <math.h>(More later).
    //i.e you cant run 4^5 and get value of 4 power 5, similary you cant do 4.5 to expect 4x5. these things arent valid in c

