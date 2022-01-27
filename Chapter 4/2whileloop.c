// While Loop
         // The block keeps executing as long as the condition is true


// An example:

// #include<stdio.h> 

// int main()
// {
//     int i;
//     scanf("%d", &i);

//     while (i<=10){
//         printf("The value of i is %d\n",i);
//         i++;               /////////i++ means i = i+1
//     }
//     return 0; 

// }






// Note:
// If the condition never becomes false, the while loop keeps getting executed. Such a loop is known as an infinite loop.








// Quick Quiz: 
// Write a program to print natural numbers from 10 to 20
        //  when the initial loop counter i is initialized to 0.
// The loop counter need not be int, it can be a float as well.

// by me
// #include<stdio.h>
// int main()
// {
//     int i=0;
//     while(i>=10 && i<=20){
//         printf("natural number is %d", i);
//         i++;
//     }
//     return 0; 

// }




//by sir
#include<stdio.h>

int main()
{
    int i= 0;
    while (i>=20){
        if(i>=10){
            printf("the value of i is %d\n", i );
        }
        i++;

    }
    return 0; 

}

