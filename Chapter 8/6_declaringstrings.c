/*
IMPORTANT AND QUIET DIFFICULT CONCEPT HERE;;;;;;;;;

Declaring a string using pointers
We can declare strings using pointers

char *ptr= "Harry";
This tells the compilers to store the string in the memory and the assigned address is stored in a char pointer.*/

//here we declared the string using pointers:
        // #include<stdio.h>
        // int main()
        // {
        //     char *ptr = "Harry bhai";
        //     printf("%s\n", ptr);
        //     for (int i = 0; i < 10; i++)
        //     {
        //         printf("%d elemnt is %c at address %u\n", (i+1), ptr[i], &ptr[i]);
        //     }
        //     return 0; 
        // }


/*
Note:
        Once a string is defined using char st[]= "harry", it cannot be initialized to something else.
        A string defined using pointers can be reinitialized.   => ptr= "rohan";
*/

#include<stdio.h>

int main()
{
    // char st[]= "harry bhai";         //when we used this syntax , initialisation matlab changing the string was'nt possible hence A string defined using array cannot be reinitialized.You can use this syntax for changing INDIVIDUAL ELEMENTS of a string.
    char *st= "harry bhai";             //when we used this syntax , initialisation was possible and harry bhai changed to karan bhai hence A string defined using pointers can be reinitialized.
    st = "karan bhai";
    printf("%s", st);
    return 0; 
}


//FOR CHANGING INDIVIDUAL ELEMENTS OF A STRING YOU USE THIS FORMAT to represent string        char c[];
//otherwise YOU USE THIS FORMAT *c ;--------- this is read only memory                        char *c;