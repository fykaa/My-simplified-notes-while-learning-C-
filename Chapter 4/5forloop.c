// For Loop
// The syntax of for loop looks like this:

        // for( initialize; test; increment or decrement)
        // {
        // //code;
        // }

            // Initialize -> setting a lop counter to an initial value
            // Test -> checking a condition
            // Increment -> updating the loop counter

// An example:

// #include<stdio.h>

// int main()
// {
//     for(int i=0; i<10; i++){
//         printf("the value of i is %d\n", i);
//     }
//     return 0; 
// }



//quick quiz;
//write a program to print first n natural numbers using for loop;

#include<stdio.h>

int main()
{
    int n;
        printf("the value of n is");
        scanf("%d", &n);
    for(int i=0 ; i<=n; i++){
        printf("number %d\n", i);
    }
    return 0; 

}
