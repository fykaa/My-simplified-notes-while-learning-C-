// Recursion
/*A function defined in C can call itself. This is called recursion.
A function calling itself is also called a recursive function.

Example of Recursion:
A very good example of recursion is factorial
factorial(n) = 1x 2 x 3...........x n
factorial(n)= 1 x 2 x 3...........n-1 x n
factorial(n)= factorial of (n-1) x n
Since we can write factorial of a number in terms of itself, we can program it using recursion.


// Function to calculate factorial using recursion*/
                // int factorial(int x){
                // int f;
                // if(x==0||x==1)
                //  return 1;	
                // else
                //  f=x * factorial(x-1);
                // return f;

#include<stdio.h>
int factorial(int x);       //function prototype
int main()
{
    int a = 4;
    printf("the value of factorial %d is %d",a, factorial(a) ); //function call
    return 0;
}

int factorial(int x)
{
    if (x==1 || x==0)
    {
        return 1;
    }
    else{
        return x* factorial(x-1); //Function defination
    }
}

//How does it work?
/*
factorial(5)
5xfacctorial(4)
5x4xfactorial(3)
5x4x3xfactorial(2)
5x4x3x2xfactorial(1)
5x4x3x2x1

Important Notes:
1. Recursion is sometimes the most direct way to code an algorithm
2. The condition which doesn’t call the function any further in a recursive function is called the base condition.
3. Sometimes, due to a mistake made by the programmer, a recursive function can keep running without returning, resulting in a memory error.*/


//WE SAW ALTERANATIVE OF GETTING FACTORIAL in loops from the code:
            // #include<stdio.h>
            // int main()
            // {
            //     int a=1, n=5;
            //     for (int i = 1; i<= n; i++)
            //     {
            //         a*=i;
            //     }
            //     printf("%d", a);
            //     return 0; 
            // }
    
