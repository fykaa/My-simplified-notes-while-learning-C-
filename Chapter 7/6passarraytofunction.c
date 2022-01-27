/*Passing arrays to functions

Arrays can be passed to the functions like this

printArray(arr,n);                               => function call

void printarray(int *i,int n);                   => function prototype --here int *i is an array
or
void printarray(int i[] ,int n);

@ IMPORTANT *ptr is an ARRAY! yes, *ptr= ptr[]   okay!
*/

// // using ptr[] :
// #include<stdio.h>
// void printArray(int ptr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i+1, ptr[i]);
//     }
    
// }
// int main()
// {
//     int arr[]={16,26,38,45,55,23,42};       //so this has 7 elements
//     printArray(arr, 7);
//     return 0; 
// }


//using *ptr:
// #include<stdio.h>
// void printArray(int *ptr, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i+1, *(ptr+i));
//     }
    
// }
// int main()
// {
//     int arr[]={16,26,38,45,55,23,42};       //so this has 7 elements
//     printArray(arr, 7);
//     return 0; 
// }

//Trying to change value in a array using function and pointer
#include<stdio.h>
void printArray(int ptr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i+1, ptr[i]);
    }
    ptr[2]= 432; //this value will change in arr main AS WELL!! because hamne pointer use kiya hai i.e. callby referencce
}
int main()
{
    int arr[]={16,26,38,45,55,23,42};       //so this has 7 elements
    printArray(arr, 7);
    printf("Element 3 is changed from 38 to %d", arr[2]);
    return 0; 
}