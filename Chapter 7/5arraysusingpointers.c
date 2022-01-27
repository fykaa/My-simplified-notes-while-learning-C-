/*Consider this array,

7 9 2 8 1
0 1 2 3 4--index of elements in the array

If ptr points to index 0, ptr++ will point to index 1 & so on.....
(@ so when you are adding 1 to a pointer the address of variable is NOT changing , its just that the pointer is now considering another location (ANOTHER ELEMENT))
//@--- means the thing  written b yme

This way we can have an integer pointer pointing to the first element of the array like this:
int *ptr = & arr[0];     => ptr is pointing to 7
ptr++;
*ptr                     =>NOW, ptr is pointing to 9
//@SO WE aint changing address of 7 instead ptr changed its index!!!! i.e. abb ptr 9 par chalaa gaya*/
#include<stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    // ptr=&marks[0]; this functions same as ptr= marks !!!!!!!!!! YES
    ptr= marks;
    for (int i = 0; i <4; i++)
    {
        printf("Enter the value of marks for students %d: \n",i+1);
        scanf("%d", &marks[i]);
        ptr++;      //so here we are changing address of pointer and uss address pr change kr parahe hai, so here we are accesing an array using pointer!
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of marks for student %d is %d \n", i+1, marks[i]);
    }
    return 0; 
}