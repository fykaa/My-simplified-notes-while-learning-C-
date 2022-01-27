// Operator associativity

    // When operators of equal priority are present in an expression, the tie is taken care of by associativity
    // i.e.
        // x  *  y  /  z => (x * y) / z
        // x  /  y  *  z => (x / y) * z

// *, / follows left to right associativity.


#include<stdio.h>

int main()
{
    int x= 2, y= 3;
    printf("the value of 8*y/3*x is %d", 8*y/3*x);  //took as ((8*y)/3)*x
    return 0; 

}