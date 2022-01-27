/*Multidimensional arrays
An array can be of 2 dimension / 3 dimension / n dimensions.

A 2-dimensional array can be defined as:
int arr [3][2] ={
                 {1,4}
                 {7,9}
                 {11;22}
};
We can access the elements of this array as arr [0] [0], arr [0] [1] & so on...

At arr [0] [0] value would be 1 and
at arr [0] [1] value would be 4.*/

#include<stdio.h>

int main()
{
    int n_students= 3;
    int n_subjects= 4;  
    int marks[3][4];
    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("Enter the value of marks for std %d in sub %d\n ", i+1,j+1);
            scanf("%d", &marks[i][j]);
        }
            printf("\n");
    }
    for (int i = 0; i <n_students ; i++)
    {
        for (int j = 0; j <n_subjects; j++)
        {
            printf("The value of marks for Std %d in sub %d is %d\n", i+1, j+1 , marks[i][j]);
        }
        printf("\n");
    }
    return 0; 
}