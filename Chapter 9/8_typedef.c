/*
Typedef keyword
We can use the typedef keyword to create an alias(easier name) name for data types in c.
typedef is more commonly used with structures.

//@ so typedef ka fayda hai ki aapko baar baar struct nahi likhna padega ,
        // instead of writing "struct employee" you can directly like int or char use a simple name like "emp" or any
//TYPEDEF ka bass yahi kaam hai, customised datatype banane ke kaam aata hai


//@ alias name matlab
    //shubham ka shomu
    //samantha ka sam lol

struct complex{
    float real;	                       // "struct complex c1,c2;" for defining complex numbers
    float img;
    };
typedef struct complex{
    float real;
    float img;	                    // "cn c1,c2;" for defining complex numbers
    }cn ; 
    

"struct complex c1,c2;" >------TYPEDEF------> "cn c1,c2;"

 */



#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[30];
} emp;      //This way using TYPEDEF you can create an easier name for struct employee

void show(struct employee emp1){
    printf("The code of employee is: %d\n", emp1.code);
    printf("The name of employee is: %s\n", emp1.name);
    printf("The salary of employee is: %.2f\n", emp1.salary);
}

int main()
{
    //Declaring e1 and ptr
    emp e1;     //instead of "struct employee e1" , we used emp e1
    emp *ptr;

    //Pointing ptr to e1
    ptr= &e1;

    //Set the number values for e1
    ptr->code = 101;
    ptr->salary = 11.11;
    strcpy(ptr->name, "HARRY");
    show(e1);
    return 0; 
}

//@ so typedef ka fayda hai ki aapko baar baar struct nahi likhna padega ,
        // instead of writing "struct employee" you can directly like int or char use a simple name like "emp" or any
//TYPEDEF ka bass yahi kaam hai, customised datatype banane ke kaam aata hai



//TYPEDEF can be used at any of the places/functions/etc in c language, but most commonly in structures.
