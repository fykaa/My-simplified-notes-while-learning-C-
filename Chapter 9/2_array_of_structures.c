/*
Array of Structures
Just like an array of integers, an array of floats, and an array of characters, 
we can create an array of structures.


@In struct employee e1,e2,e3......e100 instead of literally mentioning 1 to 100 for each employee, array come to the rescue

struct employee facebook[100];     =>an array of structures

We can access the data using:
facebook[0].code=100;
facebook[1].code=101;
..........and so on.
*/

#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee facebook[3];  //this is an array of all employees at fb ab hame e1,e2,e3,e4.....e100
    facebook[0].code = 100;
    facebook[0].salary = 100.40;
    strcpy(facebook[0].name, "Harry");

    facebook[1].code = 120;
    facebook[1].salary = 102.40;
    strcpy(facebook[1].name, "Roha");

    facebook[2].code = 110;
    facebook[2].salary = 200.40;
    strcpy(facebook[2].name, "karan");
    printf("DONE");
    return 0; 
}