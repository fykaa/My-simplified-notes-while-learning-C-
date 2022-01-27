// 4. Write a C program to find whether a given year is a leap year or not. Go to the editor
// Test Data : 2016
// Expected Output :
// 2016 is a leap year.



//LEAP YEAR___ 
// 1.IS DIVISIBLE BY 4
// 2.IS NOT DIVISIBLE BY 100 ---here it is proven that year is a leap year, but if year is divisible by 100 ONLY then:
    // 3. Year should be divisible by 100

// AMAZING PROGRAM WRITTEN BY ME!!!!!!!
#include<stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if (year%4 == 0)
    {
        if (year%100 !=0)
        {
            printf("LY\n");
        }
        else{
            if (year%400 ==0)
            {
                printf("LY\n");
            }
            else{
                printf("Not LY\n");
            }
        }
    }
    else{
        printf("NOT LY\n");
    }
    
    return 0;
}