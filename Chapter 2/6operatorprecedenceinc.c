// Operator Precedence in C
// 3*x-8y  is (3x)-(8y) or  3(x-8y)?

    // In the c language, simple mathematical rules like BODMAS no longer apply.
    // The answer to the above question is provided by operator precedence & associativity.

//Operator precedence

// The following table list the operator priority in C

    // Priority	Operators
    // 1st        	* / %
    // 2nd	        +   -
    // 3rd	        =
// Operators of higher priority are evaluated first in the absence of parenthesis i.e.()



#include<stdio.h>

int main()
{
    int x=4, y=9;
    printf("the value of 3*x-8*y is %d", 3*x-8*y);  //took as (3*x)-(8*y)
    printf("the value of 3*(x-8)*y is %d", 3*(x-8)*y);  //took as 3*(x-8)*y because parenthesis ke upar kisi ka baap nahi.
    return 0; 

}

//BUT WHAT IF * and / COMES IN THE SAME EQUATION, dono ki priority to same hai. hence concept of operator associtivty arrises where jo pehle hai vo hoga...