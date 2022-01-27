/*
CHAPTER 9 - STRUCTURES

Arrays and Strings   => Similar data (int, float, char)
Structures can hold  => dissimilar data   //@user defined custom datatype

Syntax for creating Structures

A C Structure can be created as follows:

struct employee{
    int code;                                  => this declares a new user-defined datatype
    float salary;
    char name[10];
    };                                         => • semicolon is important

We can use this user-defined data type as follows:

struct employee e1;                         // creating a structure variable
strcpy(e1.name,"harry");
e1.code=100;
e1.salary=71.22;

So A structure in C is a collection of variables of different types under a single name.
*/
//EXAMPLE

            // #include<stdio.h>
            // #include<string.h>
            // struct employee
            // {
            //     int code;
            //     float salary;
            //     char name[10];
            // };

            // int main()
            // {
            //     int a = 34;
            //     float b = 232.23;
            //     char c = 'g';

            //     struct employee e1;
            //     e1.code = 234;
            //     e1.salary = 12.2;
            //     strcpy(e1.name, "Harry");
            //     // e1.name = "harry";  //wont work because this is character array (not charachter pointer) hence we can't declare it like this

            //     printf("%d\n", e1.code);
            //     printf("%.2f\n", e1.salary);
            //     printf("%s\n", e1.name);        //USE STRING FUNCTION %s BECAUSE CHAR ARRAY[] IS USED
            //     return 0;   
            // }


//e1.code 
//yaha dot is called as MEMOR OPERATOR





// Quick Quiz: Write a program to store the details of 3 employees from user-defined data.
//  Use the structure declared above.
//ANSWER 
//BY ME
                // #include<stdio.h>
                // #include<string.h>
                // struct employee
                // {
                //     int code;
                //     char name[50];
                //     float salary;
                // };

                // int main()
                // {
                //     struct employee first;
                //     first.code = 6001;
                //     strcpy(first.name, "Harry");
                //     first.salary = 33422.321;

                //     struct employee second;
                //     second.code = 6002;
                //     strcpy(second.name, "Rohan");
                //     second.salary = 3322.321;

                //     struct employee third;
                //     third.code = 6003;
                //     strcpy(third.name, "Karan");
                //     third.salary = 343322.321;
                //     return 0; 
                // }
//BY SIR

#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    char name[50];
    float salary;
};

int main()
{
    struct employee e1,e2,e3;
    printf("Enter the value of code for e1\n");
    scanf("%d", &e1.code);
    printf("Enter the value of salary for e1\n");
    scanf("%f", &e1.salary);
    printf("Enter the name of e1\n");
    scanf("%s", e1.name);       //here we are not using & because e1.name is already a array and we use the entire thing padha hai na string arrays mein

    printf("Enter the value of code for e2\n");
    scanf("%d", &e2.code);
    printf("Enter the value of salary for e2\n");
    scanf("%f", &e2.salary);
    printf("Enter the name of e2\n");
    scanf("%s", e2.name);

    printf("Enter the value of code for e3\n");
    scanf("%d", &e3.code);
    printf("Enter the value of salary for e3\n");
    scanf("%f", &e3.salary);
    printf("Enter the name of e3\n");
    scanf("%s", e3.name);
    return 0; 
}






/* 
Why use structures?
We can create the data types in the employee structure separately but when the number of properties in a structure increases, it becomes difficult for us to create data variables without structures.
In a nutshell:
Structures keep the data organized.
Structures make data management easy for the programmer.


@kisi ek employee ka code name salary alag alag array mein save karna padta because they were different datatypes, lekin structures ko use karke hamne employee ki saari details ek array that is e1, e2, mein save kar diya.
 */