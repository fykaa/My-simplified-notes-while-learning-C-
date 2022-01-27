/* Reading a file
A file can be opened for reading as follows:

FILE *ptr;
ptr= fopen("Harry.txt","r");
int num;
Let us assume that “Harry.txt” contains an integer


We can read that integer using:

fscanf(ptr,"%d",&num);                => fscanf is file counterpart of scanf

This will read an integer , from the file , in the num variable. */

//EXAMPLE AMAZING:

// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     int num1;
//     int num2;
//     ptr = fopen("integer.txt", "r");
//     fscanf(ptr, "%d", &num1);               //so, using fscanf we can read the content inside a file!
//     fscanf(ptr, "%d", &num2);               //ye agla integer read karraha hai, one int variable is able to read only one integer.
//     fclose(ptr);        //file closing is a good practice so that minimum resources are occupied on the ram while working
//     //here we closed the file jab uska scanning ka kaam hogaya, ab aage jo maine store kiya vo print karrahe h;
//     printf("The value of num1 is %d\n", num1);
//     printf("The value of num2 is %d\n", num2);
//     return 0;
// }


// Quick Quiz: Modify the program above to check whether the file exists or not before opening the file.

// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     int num1;
//     int num2;
//     ptr = fopen("integkjer.txt", "r");
//     if (ptr== NULL)
//     {
//         printf("The file does'nt exists\n");
//     }
//     else{
//         printf("YAY! The file exists.\n");
//         fscanf(ptr, "%d", &num1);         
//         fscanf(ptr, "%d", &num2);    
//         fclose(ptr);      
//         printf("The value of num1 is %d\n", num1);
//         printf("The value of num2 is %d\n", num2);
//     }
//     return 0;
// }




#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("integer.txt", "r");
    if (ptr == NULL)
    {
        printf("This file doesn't exists\n");
    }
    else{
        printf("yay the file exists\n");
        int num;
        fscanf(ptr, "%d", &num);
        printf("This is value of num: %d\n",  num);
        fclose(ptr);
    }
    return 0;
}