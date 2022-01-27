/*Passing values to functions:
We can pass values to a function and can get a value in return from a function
int sum(int a, int b)
The above prototype means that sum is a function which takes values a(of type int) and b(of type int) and returns a value of type int

                    // Function definition of sum can be:*/
                    //     int sum(int a, int b)
                    //     {
                    //     int c;                                      //=> a and b are parameters
                    //     c=a+b;
                    //     return c;
                    //     }

                    // // Now we can call sum(2,3) [here 2 and 3 are arguments]; from main to get 5 in return.

                    // int d=sum(2,3);   //=> d becomes 5


#include<stdio.h>
//sum is a function which takes a ans b as input and returns an integer as an output
int sum(int a,int b);   //Funtion prototype declaration
int main()
{
    int c;
    c = sum(2,5);            //FUNCTION CALL
    printf("the value of c is %d", c);
    return 0; 
}

int sum(int a, int b){
    int result;
    result = a+b;           //FUNCTION DEFINATION
    return result;
}




/*
Note:
1. Parameters are the values or variable placeholders in the function definition. Ex: a & b
2. Arguments are the actual values passed to the function to make a call. Ex: 2 & 3
3. A function can return only one value at a time.
4. If the passed variable is changed inside the function, the function call doesn’t change the value in the calling function.
*/