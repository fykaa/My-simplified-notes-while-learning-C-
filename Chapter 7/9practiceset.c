// Chapter 7- Practice Set
// 1.Create an array of 10 numbers. 
//Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.
//ANSWER 1:
                // #include<stdio.h>
                // int main()
                // {
                //     int arr[10];
                //     //int *ptr = &arr[0];
                //     int *ptr = arr;
                //     ptr = ptr+2;
                //     if (ptr== &arr[2])
                //     {
                //         printf("POINTS TO SAME LOCATION IN THE MEMORY\n");
                //         printf("i.e. %u", ptr);
                //     }
                //     else{
                //         printf("DO NOT POINTS TO THE SAME LOCATION\n");
                //     }
                //     return 0; 
                // }


// 2.If S[3] is a 1-D array of integers, then *(S+3) refers to the third element:
// True
// False
// Depends
//ANSWER 2:
                //NOT DEPENDS because ye same compiler mein pointing ki baat karraha h, so selecting depends makes no sense
                // s[3]matlab this array has 3 ELEMENTS, on locations as s[0], s[1], s[2]....THERE IS NO S[3] in this array!!
                //also if you do S+3 this will point to the 4th element AND NOT third. 
                //hence answer is 'FALSE'
                // BECASUE s+3 is pointing at 4th elemnt

// 3.Write a program to create an array of 10 integers and store a multiplication table of 5 in it.
//ANSWER 3:
                // #include<stdio.h>
                // int main()
                // {
                //     int arr[10];
                //     int n = 10;
                //     for (int i = 0; i <n; i++)
                //     {
                //         arr[i]=(i+1)*(5);
                //     }
                //     for (int i = 0; i <n; i++)
                //     {
                //         printf("5 x %d = %d\n", (i+1), arr[i]);
                //     }
                //     return 0; 
                // }

// 4.Repeat problem 3 for a general input provided by the user using scanf()
//ANSWER 4:
                // #include<stdio.h>
                // int main()
                // {
                //     int arr[10];
                //     int n = 10, number;
                //     printf("ENTER THE NUMBER\n");
                //     scanf("%d", &number);
                //     for (int i = 0; i <n; i++)
                //     {
                //         arr[i]=(i+1)*(number);
                //     }
                //     for (int i = 0; i <n; i++)
                //     {
                //         printf("%d x %d = %d\n", number,  (i+1), arr[i]);
                //     }
                //     return 0; 
                // }

// 5.Write a program containing a function that reverses the array passed to it.
//ANSWER 5:
                // #include<stdio.h>
                // void reverse(int *arr, int n){
                //     int temp;
                //     for (int i = 0; i < (n/2); i++)
                //     {
                //         temp = arr[i];
                //         arr[i] = arr[n-1-i];
                //         arr[n-1-i]= temp;
                //     }
                    
                // }
                // int main()
                // {
                //     int arr[]={1,2,3,4,5,6,7};
                //     reverse(arr, 7);
                //     for (int i = 0; i < 7; i++)
                //     {
                //         printf("The element %d of array has become: %d\n", (i+1), arr[i]);
                //     }
                    
                //     return 0;
                // }

// 6.Write a program containing functions that counts the number of positive integers in an array.
//ANSWER 6: by me
                // #include<stdio.h>
                // void count(int *arr, int n){
                //     int pos_int =0;
                //     for (int i = 0; i < n; i++)
                //     {
                //         if (arr[i]>=0)
                //         {
                //             pos_int++;
                //         }
                //     }
                //     printf("the number of positive integers is %d", pos_int);
                // }
                // int main()
                // {
                //     int arr[10]={23,33,8,-4,0,-43,22,-22,2,10};
                //     count(arr, 10);   
                //     return 0; 
                // }


// 7.Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9, respectively.
//ANSWER 7:
//its like a table with three rows ten columns where first row is table of 2 second row is table of 7 and third row is table of 9
//hence this is a two dimensional array OKAY! i.e. 3x10

//WAY 1; (LENGHTY)
                // #include<stdio.h>
                // int main()
                // {
                //     int mult[3][10];
                //     printf("TABLE OF 2\n");
                //     for (int i = 0; i < 10; i++)
                //     {
                //         mult[0][i]= 2*(1+i);
                //     }
                //     for (int i = 0; i < 10; i++)
                //     {
                //         printf("2x%d = %d\n",(i+1), mult[0][i]);
                //     }
                //     printf("\n\nTABLE OF 7\n");
                //     for (int i = 0; i < 10; i++)
                //     {
                //         mult[1][i]= 7*(1+i);
                //     }
                //     for (int i = 0; i < 10; i++)
                //     {
                //         printf("7x%d = %d\n",(i+1), mult[1][i]);
                //     }
                //     printf("\n\nTABLE OF 9\n");
                //     for (int i = 0; i < 10; i++)
                //     {
                //         mult[2][i]= 9*(1+i);
                //     }
                //     for (int i = 0; i < 10; i++)
                //     {
                //         printf("9x%d = %d\n",(i+1), mult[2][i]);
                //     }
                //     return 0; 
                // }
//way 2 (short using function)

                // #include<stdio.h>
                // void maketable(int *mult, int num){
                //     printf("THE MULTIPLICATION TABLE OF %d is: \n", num);
                //     for (int i = 0; i < 10; i++)
                //     {
                //         mult[i]= num* (i+1);
                //     }
                //     for (int i = 0; i < 10; i++)
                //     {
                //         printf("%d x %d = %d\n", num, (i+1), mult[i]);
                //     }
                //     printf("\n****************************\n");
                // }
                // int main()
                // {
                //     int mult[3][10];
                //     maketable(mult[0], 2);
                //     maketable(mult[1], 7);
                //     maketable(mult[2], 9);
                //     maketable(mult[3], 6);
                //     maketable(mult[4], 5);
                //                 //to proove that ye sab array mein save hue hai;
                //                 // for (int i = 0; i < 10; i++)
                //                 // {
                //                 //     printf("5 x %d = %d\n",(i+1), mult[4][i]);
                //                 // }
                //     return 0; 
                // }

// 8.Repeat problem 7 for a custom input given by the user.
//ANSWER 8:
                // #include<stdio.h>
                // void maketable(int *mult, int num, int num2){
                //     printf("THE MULTIPLICATION TABLE OF %d till %d is: \n", num, num2);
                //     for (int i = 0; i < num2; i++)
                //     {
                //         mult[i]= num* (i+1);
                //     }
                //     for (int i = 0; i < num2; i++)
                //     {
                //         printf("%d x %d = %d\n", num, (i+1), mult[i]);
                //     }
                //     printf("\n****************************\n");
                // }
                // int main()
                // {
                //     int mult[3][10];
                //     int x, y;
                //     printf("You want the multiplication table of which number?\n");
                //     scanf("%d", &x);
                //     printf("You want %d to be multiplied till which number?\n", x);
                //     scanf("%d", &y);
                //     maketable(mult[0], x, y);
                //     return 0; 
                // }

// 9.Create a three-dimensional array and print the address of its elements in increasing order.
//ANSWER 9:
//This is amazing way to show how array is saved in the memory! AMAZING
#include<stdio.h>
int main()
{
    int array[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("The address of arr[%d][%d][%d] is %u\n", i, j, k, &array[i][j][k]);
            }
        }
    }
    return 0; 
}