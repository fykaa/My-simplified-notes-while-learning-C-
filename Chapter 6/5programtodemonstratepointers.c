// A Program to demonstrate Pointers:

#include<stdio.h>
int main()
{
    int i=8;
    int *j;                         //j is a pointer
    j= &i;                          //j points to i........The & operator is saying "address of" i.e. j is now storing address of i
    //Format specifier for printing pointer address is ‘%u’------matlab like %d for int, %f for float similarly %u for pointer
    printf("Address of i=%u\n", &i);       //&i is address of i      
    printf("Address of i=%u\n", j);        //j=&i as mentioned above, hence j is address of i
    printf("Address of j=%u\n", &j);       //&j is address of j
    printf("Value of i=%d\n", i);       //i is 8     
    printf("Value of i=%d\n", *(&i));   //imp- pointer of (address of i) = value of i
    printf("Value of i=%d\n", *j);      //imp- pointer of j= pointer of (address of i) = value of i
    printf("Value of j=%u\n", *(&j));   //imp- *(&j) --gives Value of j
    return 0;
}


//This program sums it all. If you understand it, you have got the idea of pointers!