/*

free() function
We can use free() function to allocate the memory.
The memory allocated using calloc/malloc is not deallocated automatically.

@ek baar aapne memory allocate kr di to vo vaha reh jati hai and aapko use free karna padega if you want your program to work in least possible occupied memory.
@isse aapke program ke users satisfied rahege apke program se and less ram mein smooth experiene milega

Syntax:
free(ptr);      => Memory of ptr is released




Quick Quiz: Write a program to demonstrate the usage of free() with malloc().*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int *ptr2;
    ptr = (int*)malloc(20 * sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        ptr2 = (int*) malloc(6 * sizeof(int));
        printf("Enter value of %d:\n", (i+1));
        scanf("%d", &ptr[i]);
        free(ptr2);
    }
    return 0;
}