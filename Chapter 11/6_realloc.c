/*

realloc() function
Sometimes the dynamically allocated memory is insufficient or more than required.

realloc is used to allocate memory of new size using the previous pointer and size.

Syntax:

ptr = realloc(ptr,newSize);
ptr = realloc(ptr, 3* sizeof(int)); 
            //ptr now points to this new block of memory, which is capable of storing 3 integers

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr;
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
    ptr = realloc(ptr, 10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value for float %d\n", (i+1));
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value for float %d is %.1f\n", (i+1), ptr[i]);
    }
    return 0;
    //SO maine usi memory ko reuse kar liya aur mere program ke memory consumption ko SPIKE up hone se bacha liya
}

