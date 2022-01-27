// 1.What will be the output of this program?
    // int a=10;

    // if(a=11)
    //    printf(“I am 11”);
    // else
    //    printf(“I am not 11”);

// JUST BY SEEING YOU SHOULD BE ABLE TO SAY OUTPUT WILL BE "I am 11".
//BECAUSE if MEIN ASSIGNMENT OPERATOR USE KIYA GAYA HAI, I.E 
// if(a=11) KA MATLAB HAI THIS STATEMENT IS TRUE, as 11 IS A NON ZERO NUMBER.

//AGAR a==11 DETE FIR HAMARA ANSSWEER I AM NOT 11 AATA.


#include<stdio.h>

int main()
{
    int a=10;
    if(a=11)
       printf("I am 11");
    else
       printf("I am not 11");
    return 0; 

}