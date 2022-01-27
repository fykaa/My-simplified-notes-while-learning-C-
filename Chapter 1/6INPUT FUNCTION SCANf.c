
// Receiving input from the user

// In order to take input from the user and assign it to a variable, we use scanf function.

// The syntax for using scanf:


// scanf(“%d”,&i); 


// [This & is important]

// & is the “address of” operator, and it means that the supplied value should be copied to the address which is indicated by variable i.


  



#include<stdio.h>

int main()
{
    int a, b ;
    printf("enter the value of a \n");
    scanf("%d", &a);

    printf("enter the value of b \n");
    scanf("%d", &b);

    printf("the sum of a and b is %d ", a + b);
    
    return 0;
}

