/*
Initializing structures
Structures can also be initialized as follows:
struct employee harry={100,71.22,"Harry"};    @so yaha aap ek hi array mein teeno datatype daal paa rahe ho

//if you want to make all the elements of the structure = 0 then do this:
struct employee shubh={0};                   // All the elements set to 0*/


#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee harry = {100, 372.2, "Harry"};  
    //ORDER IN WHICH int, float and character IS ENTERED IN THE FUNCTION HAS TO BE MAINTAINED IN THE INITIALISATION!!
    printf("Code is: %d \n", harry.code);
    printf("Salary is: %f \n", harry.salary);
    printf("Name is: %s\n", harry.name);
    return 0; 
}