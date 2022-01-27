/*
calloc() function
calloc stands for continuous allocation.

It initializes each memory block with a default value of 0.

@same as malloc ye bhi memory allocation krta hai, bas ye HAR memory block ko initialise kardeta hai value zero se rather keeping them null.

Syntax:

ptr = (float*)calloc(30, sizeof(float));

//Allocates Contiguous space in memory for 30 blocks
If the space is not sufficient, memory allocation fails and a NULL pointer is returned.

*/

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int *ptr;
//     ptr = (int*)calloc(6, sizeof(int));
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter value of %d element\n", (i+1));
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("The value of %d element is %d\n", (i+1), ptr[i]);
//     }
    
//     //so calloc by default zero se initialise kar deta hai saare ke saare blocks ko, unless changed
//     return 0;
// }


// Quick Quiz: Write a program to create an array of size n using calloc() where n is an integer entered by the user.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *ptr;
    printf("How many integers do you want to enter?\n");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for %d\n", (i+1));
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value for %d is %d\n", (i+1), ptr[i]);
    }
    return 0;
}


//hence you see using malloc or calloc you can literally change and choose the size of array