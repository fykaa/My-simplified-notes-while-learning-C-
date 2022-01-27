// 4.Write a program to find whether a year entered by the user is a leap year or not. Take the year as input from the user.

//ANSWER
// Below conditions are used to check that year is a leap year or not.

// Year must be divisible by 4
// Year is divisible by 400 or not divisible by 100.

#include<stdio.h>

int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d", &year);

    if(year%4==0 && year%100!=0 || year%400==0)
    {
        printf("The year is a leap year (it has 366 days)");
    }
    else{
        printf("The year is not a leap year (it has 365 days)");
    }
    return 0; 
}
