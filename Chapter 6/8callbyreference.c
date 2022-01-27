/*
Call by reference:
    Here the address of the variable is passed to the function as arguments.
    Now since the addresses are passed to the function, the function can now modify the value of a variable in calling function using * and & operators.
    Example:

                void swap(int *x, int *y)
                {
                    int temp;
                    temp= *x;
                    *x = *y;
                    *y = temp;
                }
    This function is capable of swapping the values passed to it. 
    If a=3 and b=4 before a call to swap(a,b), a=4 and b=3 after calling swap.
    BASICALLY;
            int main()
            {
                int a=3;	// a is 3 and b is 4
                int b=4;
                swap(a,b)
                return 0;	// now a is 4 and b is 3
            }*/



/*EXPLANATION WITH EXAMPLE of xerox copy and original document
CBV mein ham main se function ko xerox copy send karte hai , isliye function ;main ke variable mein change nahi kar sakta, i.e. original ko change nahi kar sakta
CBR mein ham function ko original copy ka address bataa dete hai , isliye koi bhi ab original ke paas jakr usme change kr sakta hai, i.e. function ab main mein jakr main mein changes kar paayega!
*/



#include<stdio.h>
void wrong_swap(int a, int b);  //ham yaha void isliye le rahe hai becasue yaha koi return function use nahi karna padraha hai.
void swap(int *a, int *b);
int main()
{
    int x=3, y=4;
    printf("The value of x and y before swap is %d and %d\n", x,y);
    // wrong_swap(x,y); //will not work due to call by value--here we gave xerox copy to function
    swap(&x, &y);       //will work due to call by reference--here we gave address of original to function
    printf("The value of x and y after swap is %d and %d\n", x,y);
    return 0; 
}
void wrong_swap(int a , int b){
    int temp;
    temp = a;
    a=b;
    b=temp;
}
//isne kaam hi nahi kiya!, because we are doing call by value!

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}