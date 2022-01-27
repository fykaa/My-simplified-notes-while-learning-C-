/* Function prototype:
Function prototype is a way to tell the compiler about the function we are going to define in the program.
Here void indicates that the function returns nothing.

/*Function call:
Function call is a way to tell the compiler to execute the function body at the time the call is made.
Note that the program execution starts from the main function in the sequence the instructions are written.

/*Function definition:
This part contains the exact set of instructions that are executed during the function call.
When a function is called from main(), the main function falls asleep and gets temporarily suspended. During this time, the control goes to the function being called when the function body is done executing main() resumes.

*/
//EXAMPLE:

        // #include<stdio.h>
        // void display();         //FUNCTION PROTOTYPE
        // int main()
        // {
        //     int a;
        //     printf("Initialising Display Function\n");
        //     display();          //FUNCTION CALL
        //     printf("Display function returned its work");
        //     return 0; 
        // }
        // void display(){         //FUNCTION DEFINATION
        //     printf("This is display\n");
        // }






// Quick Quiz: Write a program with three functions,

// Good morning function which prints "Good Morning."
// Good afternoon function which prints "Good Afternoon."
// Good night function, which prints "Good night."
// main() should call all of these in order 1 - 2 - 3.


#include<stdio.h>
//function prototype
void gm();
void gn();
void ga();

int main()
{
    int a;
    printf("INITIALLY\n");
    //function call
    gm();
    ga();
    gn();
    return 0; 
}

//function defination
void gm(){
    printf("GOOD MORNING\n");
}
void ga(){
    printf("GOOD AFTERNOON\n");
}
void gn(){
    printf("GOOD NIGHT\n");
}



// Important Points:

// Execution of a c program starts from main()
// A c program can have more than one function
// Every function gets called directly or indirectly from main()--------------a function can also call another function for example chcek next file
// There are two types of functions in c. Let's talk about them.
