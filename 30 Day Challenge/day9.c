/*
Objective
Today, we are learning about an algorithmic concept called recursion. Check out the Tutorial tab for learning materials and an instructional video.

Recursive Method for Calculating Factorial
Function Description
Complete the factorial function in the editor below. Be sure to use recursion.

factorial has the following paramter:

int n: an integer
Returns

int: the factorial of 
Your submission must contain a recursive function named factorial.

*/
//my soln
#include<stdio.h>
int factorial(int a){
    if (a==1 || a==0)
    {
        return 1;
    }
    else{
        return a* factorial(a-1);
    }
}
int main()
{
    int a;
    scanf("%d", a);
    factorial(a);
    return 0;
}
//hackerrank's given format

//tutorial book's solution
