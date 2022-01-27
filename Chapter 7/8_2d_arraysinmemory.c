/*
A 2-dimensional array you write;
    int arr [3][2] ={
                    {1,4}
                    {7,9}
                    {11;22}
will appear like this in Memory;
    A 2-d array like a 1-d array is stored in contiguous memory blocks like this:
    arr[0][0]  arr[0][1] ........
    1   4          7   9       11  22




Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.*/

        // AGE GROUP 20 FEMALES HAS INCOME =
        // AGE GROUP 50 FEMALE HAS INCOME
        // AG 20 MALE INCOME=
        // AG 50 MALE INCOEM= 
        // 23
        // 00
        // 01
        // 02
        // 10
        // 11
        // 12

#include<stdio.h>

int main()
{
    int age_grp[2]= {18,50};
    char gender[3]={male, female, trans, \0};   //i wanted to write char gender[3]={male, female, trans}; but i am not able to apply characters
    int income[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The Income of Age grp %d %d is :\n", age_grp[i], gender[j]);
            scanf("%d", &income[i][j]);
        }   
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The Income of Age grp %d %d is : %d\n", age_grp[i], gender[j], income[i][j]);
        }   
    }
    return 0; 

}