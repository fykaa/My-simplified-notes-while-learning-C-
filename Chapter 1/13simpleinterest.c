// Q4. Write a program to calculate simple interest for a set of values representing principle, no of years, and rate of interest.


#include<stdio.h>

int main()
{
    int principal, rate, years;
    
    printf("principal\n");
    scanf("%d", &principal);
    
    printf("rate\n");
    scanf("%d", &rate);
    
    printf("years\n");
    scanf("%d", &years);
    int far = (principal* rate* years) / 100 ;
    
    printf("the value of simple interest is %d", far);
    return 0;

}