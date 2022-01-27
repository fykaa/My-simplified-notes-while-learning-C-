/*

Passing Structure to a function
A structure can be passed to a function just like any other data type.

void show(struct employee e);   =>Function prototype

Quick Quiz: Complete this show function to display the content of the employee.*/

#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};

void show(struct employee emp){
    printf("The code of employee is: %d\n", emp.code);
    printf("The name of employee is: %s\n", emp.name);
    printf("The salary of employee is: %.2f\n", emp.salary);
    emp.code = 14;      //doing to show that changing a value of structure in the function is not possible that is here structure is not updating using call by reference
}
int main()
{
    //Declaring e1 and ptr
    struct employee e1;
    struct employee *ptr;

    //Pointing ptr to e1
    ptr= &e1;

    //Set the number values for e1
    ptr->code = 101;
    ptr->salary = 11.11;

    strcpy(ptr->name, "HARRY");
    show(e1);
    printf("the value of emp e1 is now: %d\n", e1.code);    //this prooves that structure ki copy gayi hai function mein, structure call by reference update nahi horaha hai
    return 0; 

}