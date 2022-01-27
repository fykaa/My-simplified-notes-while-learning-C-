/*Types of function calls
Based on the way we pass arguments to the function, function calls are of two types.

    Call by value ->     sending the values of arguments.
    Call by reference -> sending the address of arguments


Call by value:
    Here the values of the arguments are passed to the function. Consider this example:
        int c = sum( 3 , 4 );   =>  Assume x=3 and y=4
        If sum is defined as sum(int a, int b), the values 3 and 4 are copied to a and b.
        Now even if we change a and b (in function defination), nothing happens to the variables x and y.
        This is call by value.
    In C, we usually make a call by value.

//example;*/

#include<stdio.h>
int sum(int a , int b);
int main()
{
    int x=3, y=4;
    printf("the value of x and y is %d and %d\n", x,y);
    printf("The value of 4+7 = %d\n", sum(x,y));
    printf("the value of x and y after function call is %d and %d\n", x,y);

    return 0; 
}
int sum(int a , int b){
    int c;
    c = a+ b;
    b = 3434;
    a= 23432;
    return c;   
}

/*Output:
the value of a and b is 4 and 7
The value of 4+7 = 11
the value of a and b after function call is 4 and 7

As you see, though the FUNCTION asked to change the value of a and b , it was'nt possible, 
    because "Call by value" mein ham 'FUNCTION' k madhyam se 'MAIN' ke variable ko change NAHI kr sakte!!! Agar call by value mein main ke variable ko change karna hai to you'll have to use POINTER.
SO ; thogh you treid to change the value a and b in the defination you were not able to do it!

Hence this prooves, CALL BY VALUE mein aap variable ki value without pointer change NAHI kar sakte!.*/