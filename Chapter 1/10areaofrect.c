// Q1. Write a c program to calculate the area of a rectangle:


// a) using hardcoded inputs & 

// b) using inputs supplied by the user


//method 1
# include<stdio.h>

int main ()
{
    int length=3, breadth=8;
    int area = length * breadth;
    printf("FOR HARDCODED Length and breadth, the area of this rectangle is %d\n", area);
    
    int a, b ;
    printf("Enter lenght\n");
    scanf("%d", &a);

    printf("enter breadth\n");
    scanf("%d", &b);

    printf("area of the rectangle for input supplied is %d\n ", a*b);

    return 0;
}



//method 2

