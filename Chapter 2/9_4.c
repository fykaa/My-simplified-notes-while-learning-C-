// Q3. Write a program to check whether a number is divisible  97 or not.

#include<stdio.h>

int main()
{
    int n;
    printf("enter number");
    scanf("%d", &n);

    printf("Divisibilty test returns: %d", n%97 );
    return 0; 

}

//so if answer cones zero its prooved to be divisible. if not then its not divisible.