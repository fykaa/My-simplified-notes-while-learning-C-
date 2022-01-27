// Chapter 3: Conditional Instructions

// Sometimes we want to watch comedy videos on youtube if the day is Sunday. Sometimes we order junk food if it is our friend's birthday in the hostel. You might want to buy an umbrella if it's raining and you have the money. You order the meal if dal or your favorite bhindi is listed on the menu.

// All these are decisions that depend on conditions being met.

// In ‘C’ language, too, we must be able to execute instructions on a condition(s) being met.



// Decision-making instructions in C:
    // If-else statement
    // Switch statement




// code for finding out if the number is even or odd

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a no.\n");
    scanf("%d", &a);

    if(a%2==0){
        printf("%d is even\n", a);
    }

    else{
        printf("%d is odd", a);
    }
    return 0; 


}



// Note that else block is not necessary but optional.
