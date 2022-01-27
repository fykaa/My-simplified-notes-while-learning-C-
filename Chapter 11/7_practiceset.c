
// Chapter 11 - Practice Set


// (1). Write a program to dynamically create an array of size 6 capable of storing 6 integers.
// ANSWER:

// #include<stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = (int*)malloc(6*sizeof(int));
//     return 0;
// }

// (2). Use the array in Problem 1 to store 6 integers entered by the user.
// ANSWER:

// #include<stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = (int*)malloc(6*sizeof(int));
//     for (int i = 0; i < 6; i++)
//     {
//         printf("Enter the value of %d element\n", (i+1));
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("The value of %d element is %d\n", (i+1), ptr[i]);
//     }
//     return 0;

// }


// (3). Solve problem 1 using calloc().
// ANSWER:

// #include<stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = (int*)calloc(6 , sizeof(int));

//     for (int i = 0; i < 2; i++)
//     {
//         printf("Enter the value of %d element\n", (i+1));
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("The value of %d element is %d\n", (i+1), ptr[i]);
//     }
//     return 0;
// }


// (4). Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers.
// ANSWER:

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = (int*)malloc(5 * sizeof(int));
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the value of %d element\n", (i+1));
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("The value of %d element is %d\n", (i+1), ptr[i]);
//     }
//     ptr = realloc(ptr, 10 * sizeof(int));
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Enter the value of %d element\n", (i+1));
//         scanf("%d", &ptr[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("The value of %d element is %d\n", (i+1), ptr[i]);
//     }
//     return 0;
// }




// (5). Create an array of the multiplication table of 7 up to 10 (7x10=70). Use realloc to make it store 15 numbers(from 7x1 to 7x15).
// ANSWER:

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr = (int*)malloc(10 * sizeof(int));
//     printf("THE TABLE OF 7 TILL 10\n");
//     for (int i = 0; i < 10; i++)
//     {
//         ptr[i]= 7* (i+1);
//         printf("%d x %d = %d\n", 7, (i+1), ptr[i]);
//     }
//     printf("THE TABLE OF 7 TILL 15\n");
//     ptr = realloc(ptr, 15 * sizeof(int));
//     for (int i = 0; i < 15; i++)
//     {
//         ptr[i]= 7* (i+1);
//         printf("%d x %d = %d\n", 7, (i+1), ptr[i]);
//     }
//     return 0;
// }


// (6). Attempt problem 4 using calloc().
// ANSWER:
 

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)calloc(5 , sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element\n", (i+1));
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d element is %d\n", (i+1), ptr[i]);
    }


    ptr = realloc(ptr, 10 * sizeof(int));   //so dont use "10, sizeof*int" instead "10* sizeofint"
    
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element\n", (i+1));
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is %d\n", (i+1), ptr[i]);
    }
    return 0;
}
