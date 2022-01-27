/*
malloc() function
Malloc stands for memory allocation.
It takes number of bytes to be allocated as an input and returns a pointer of type void.

Syntax:

ptr = (int*)malloc(30*sizeof(int))
       ^            ^           ^
       |            |           |
       |            |           |
       |    space for 30 ints   |
       |                        |
       |                       returns size of 1 int
       |
       |
typecasting void pointer to integer


The expression returns a NULL pointer if the memory cannot be allocated.
*/



///EXAMPLE

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     // ptr = malloc(6 * sizeof(int));       //malloc returns a pointer of type void hence we'll have to typecast it to integer here as we are here using integr
//     ptr = (int*)malloc(6 * sizeof(int));        //i wanted to make a integer array here, hence typecasted to (int*)
//         //sizeof(int) = 4 in my architecture, 
//             // ham direct 4 bhi likh sakte hai but what if this program is ran in different architecture in that case we'll mess up, 
//             // isliye safe side mein leave it on program by writing sizeof(int)

//         //This array we created now have 6 spaces to store integer, basically this array is like arr[6]

//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the value of %d element\n", (i+1));
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("The value of %d element is %d\n", (i+1), ptr[i]);
//     }
//     //SO THIS IS A DYNAMICALLY ALLOCATED MEMORY , JISE AAP ARRAY KI TARAH USE KAR PAA RAHE HO!
    
//     return 0;
// }











// Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr;     //@ptr is a array okay 
    ptr = (float*)malloc(5 * sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value for float %d\n", (i+1));
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value for float %d is %.1f\n", (i+1), ptr[i]);
    }
    return 0;
}

