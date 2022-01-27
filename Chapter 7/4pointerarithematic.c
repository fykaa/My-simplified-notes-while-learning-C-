/*
Pointer Arithmetic
A pointer can be incremented to point to the NEXT MEMORY LOCATION of that type.

Consider this example;
    int i = 32;
    int *a = &i;    ==> a =87994 (address of i = 87994)
    a++;            ==> now a = 87998          -------------------INTEGER ka size 4byte hota h, hence adding 4 to pointer(address)

    char a = 'A';
    char *b = &a;   ==> b = 87994
    b++;            ==> now b = 87995          -------------------CHARACTER ka size 1byte hota h, hence adding 1 to pointer(address)

    float i = 1.7;
    float *a = &i;   ==> Address of i or a = 87994
    a++;            ==> Now a = 87998          -------------------FLOAT ka size 4byte hota h, hence adding 4 to pointer(address)

Following operations can be performed on pointers:
    1.Addition of a number to a pointer   
    2.Subtraction of a number from a pointer
    3.Subtraction of one pointer from another 
    4.Comparison of two pointer variables*/


//example for arithematics with character float and integer;
            // #include<stdio.h>
            // int main()
            // {
            //     int a= 34;
            //     int *b;
            //     b= &a;
            //     char c = 34;
            //     char *d;
            //     d= &c;
            //     float e= 3.4;
            //     float *f;
            //     f= &e;
            //     printf("The value of integer a = %d\n", a);
            //     printf("The value of integer POINTER b = %u\n", b);
            //     printf("The value of character c = %c\n", c);
            //     printf("The value of character POINTER d = %u\n", d);
            //     printf("The value of float e = %f\n", e);
            //     printf("The value of float POINTER f = %u\n\n", f);
            //     printf("CHANGING VALUES in INT, CHAR, Float;\n\n");
            //     b = b+1;
            //     d = d+1;
            //     f = f+1;
            //     printf("The value of integer pointer b = %u\n", b);         //CHANGE OF 4BYTES
            //     printf("The value of character pointer d = %u\n", d);       //CHANGE OF 1BYTE
            //     printf("The value of float pointer f = %u\n\n", f);         //CHANGE OF 4BYTES
            //     return 0; 
            // }

// Quick Quiz: Try these operations on another variable by creating pointers in a separate program. Demonstrate all four operations.*/

#include<stdio.h>
int main()
{
    int i=56;
    int *a;
    int **k;
    a=&i;
    k=&a;
    printf("Value of Integer i is = %d\n", i);
    printf("Value of Pointer a = Address of i =  %u\n", a);
    printf("Value of Pointer k = Address of Pointer a = %u\n", k);

    printf("Adding 1 to i = %d\n\n", ++*a);               //this is adding 1 to "*a=*(&i)" i.e. to "i"
    a++;        //added 4 byte to integer address
    a++;        //added 4 byte to integer address
    printf("1. Adding 2 to Pointer a = %d\n", a);               //this is adding 2*4byte to a ,hence =address of i +2*4
    a= a -1;    //subracted 4 byte from interger address
    printf("2. Subracting 1 from Pointer a = %d\n", a);       //this is subracting 1 byte from pointer a
    // a = &i-&a;
    // printf("3. Subracting Pointer k out of Pointer a = %d\n", a);   //nahi aaraha h mujhe, sir ne nahi bataya
    printf("4.Comparing a and k pointers;\n");
    if (k>a)
    {
        printf("a is greater");
    }
    else{
        printf("K is greater");
    }
    return 0; 
}
