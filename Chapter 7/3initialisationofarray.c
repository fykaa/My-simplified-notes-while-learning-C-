/*
//Initialization of an array
There are many other ways in which an array can be initialized.
int cgpa[3]= {9,8,8}         => Arrays can be initialised while declaration
float marks[]={33.33 ,40.34}
*/
#include<stdio.h>

int main()
{
    float a[]={3.4,2.2,5.4};
    printf("The value of a[0] is %f\n", a[0]);
    printf("The value of a[1] is %f\n", a[1]);
    printf("The value of a[2] is %f\n", a[2]);
    return 0; 
//so you see it works perfectly fine and itself stored a[0]= 34 and so on..
}


//Arrays in memory
// Consider this array:
// Int arr[3]={1,2,3}            => 1 integer = 4 bytes  //@ 1 integr aksar 4 byte ka hota h but not always, it also depends on mchine, architecture, turbo c, etccc

// This will reserve 4x3=12 bytes in memory. 4 bytes for each integer.
// 1                2                3
// 62302 (+4byte) 62306 (+4 byte)  62310                             {Array in Memory}

//if interviewer asks:
//ye program kitni memeory reserve karega,
//then ask counter question; Integer kitne bytes ka hai???, because it depends on the architecture
//interviewer samjh jayega isko aata h, impressive