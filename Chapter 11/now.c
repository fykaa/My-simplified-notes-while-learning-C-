
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *ptr;
    // printf("Enter value of n:\n");
    // scanf("%d", &n);
    
    ptr = (int*)calloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter value for %d", (i+1));
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value for %d is %d", (i+1), ptr[i]);
    }
    return 0;
}