/*Accessing Elements
Elements of an array can be accessed using:
=>For Input first value---            scanf("%d",&marks[0]);       
=>For Output first value of the array--- printf("%d", marks[0]);

//array input program;*/
        // #include<stdio.h>
        // int main()
        // {
        //     int marks[4]; //allocate space for 4 integers
        //     printf("Enter the values of marks for student 1\n" );
        //     scanf("%d", &marks[0]);
        //     printf("Enter the values of marks for student 2\n" );
        //     scanf("%d", &marks[1]);
        //     printf("Enter the values of marks for student 3\n" );
        //     scanf("%d", &marks[2]);
        //     printf("Enter the values of marks for student 4\n" );
        //     scanf("%d", &marks[3]);
        //     printf("You have entered %d %d %d and %d", marks[0],marks[1],marks[2],marks[3]);
        //     return 0;
        // }
//@so ham yaha chaar alag alag integer naa banake ek array banaa sakte h jo capable hoga 4 alag alag integers ko store krne k liye





// Quick Quiz: Write a program to accept marks of five students in an array and print them to the screen.*/
#include<stdio.h>

int main()
{
    int marks[5];
    for (int i = 0; i <5; i++)
    {
        printf("Enter the value of marks for student %d\n", i+1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i <5; i++)
    {
        printf("The mark %d of the MARK array = %d\n", i+1,  marks[i]);
    }
    return 0; 
}