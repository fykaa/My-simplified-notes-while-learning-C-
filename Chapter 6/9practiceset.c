// Chapter 6 - Practice Set

// 1.Write a program to print the address of a variable. Use this address to get the value of this variable.
//ANSWER 1
    // #include<stdio.h>
    // int main()
    // {
    //     int a=6;
    //     int *ptr;
    //     ptr= &a;
    //     printf("The adress of a is %u\n", ptr);
    //     printf("the value of a is %d\n", *ptr); //--this means *(&j) that gives value
    //     return 0; 
    // }

// 2.Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?
//ANSWER 2
//by me
        // #include<stdio.h>
        // int fun(int a);
        // int main()
        // {
        //     int i=4;
        //     printf("the address of i is %u\n", &i);
        //     fun(i);
        //     return 0; 
        // }
        // int fun(int a){
        //     printf("the address of i is %u\n", &a);
        // }
            //address arent same , because fun(i), sent a copy of variable i to function hence this copy has a different location in the memory and it not same as address
//by sir
        // #include<stdio.h>
        // void print(int a){
        //     printf("The address of variable a is %u\n", &a);
        // }
        // int main()
        // {
        //     int i= 6;
        //     printf("the value of variable i is %d\n", i);
        //     print(i);
        //     printf("the value of variable i is %u\n", &i);   
        //     return 0; 
        // }
        //     //address is not same, because hamne value pass ki hai, address pass nahi kiya, 



// 3.Write a program to change the value of a variable to ten times its current value. Write a function and pass the value by reference.
//ANSWER 3
//by me
        // #include<stdio.h>
        // void ten(int *a){
        //     *a= *a*10;
        // }
        // int main()
        // {
        //     int x=2;
        //     printf("THE VALUE OF X BEFORE CHANGING IS %d\n", x);
        //     ten(&x);
        //     printf("the value of x after funcion is %d", x);
        //     return 0;
        // }

// 4.Write a program using a function that calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().
//ANSWER 4
        // #include<stdio.h>
        // void sumAndAvg(int a, int b, int *sum, float *avg){
        //     *sum = a + b;
        //     *avg = (float) (*sum)/2;
        // }
        // int main()
        // {
        //     int i, j, sum;
        //     float avg;
        //     i = 3;
        //     j = 6;
        //     sumAndAvg(i, j , &sum, &avg);
        //     printf("The value of sum is %d \n", sum);
        //     printf("The value of avg is %f \n", avg);
        //     return 0; 
        // }

// 5.Write a program to print the value of a variable i by using the "pointer to pointer" type of variable.
//ANSWER 5
        // //we know that, *&i= i
        // #include<stdio.h>

        // int main()
        // {
        // int i = 345;
        // int *ptr;
        // int **ptr_ptr;
        // ptr = &i;
        // ptr_ptr= &ptr;

        // printf("the value of i is %d", **ptr_ptr);
        //                 // *ptr_ptr  = *(&ptr) = value of ptr = &i             HENCE,
        //                 // **ptr_ptr = *(*ptr_ptr) = *(&i) = value of i.
        // return 0; 
        // }

// 6.Try problem 3 using call by value and verify that it doesn’t change the value of the said variable.
//ANSWER 6
#include<stdio.h>
void ten(int *a){
    printf("the ten times of x is %d\n", *a*10 );
}
int main()
{
    int x=2;
    printf("THE VALUE OF X BEFORE CHANGING IS %d\n", x);
    ten(&x);
    printf("the value of x after funcion is %d", x);
    return 0;
}

//watch it doesnt changes