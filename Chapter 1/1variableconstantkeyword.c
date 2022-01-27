/*Variables
A variable is a container that stores a ‘value.’ In the kitchen, we have containers storing rice, dal, sugar, etc. Similar to that variable in c stores the value of a constant. Example:

a = 3	a is assigned “3”
b = 4.7	b is assigned “4.7”
c = "A"	c is assigned “A”

Rules for naming variables in c:
1. The first character must be an alphabet or underscore(_).

2. No commas or blanks are allowed.

3. No special symbol other than underscore is allowed

4. Variable names are case sensitive i.e. a and A are different




Constants
An entity whose value doesn’t change is called a constant.

Types of constant
Primarily there are 3 types of constant:

1. Integer Constant	-1,6,7,9
2. Real Constant	-322.1 ,2.5 ,7.0
3. Character Constant	‘a’ , ’$’ , ’@’ (must be enclosed within single inverted commas)






Keywords
These are reserved words whose meaning is already known to the compiler. There are 32 keywords available in c:

auto	double	int	struct
break	long	else 	switch
case	return 	enum	typedef
char	register	extern	union
const	short	float	unsigned
continue	signed	for	void
default	sizeof	goto	volatile
do	static	if 	while

dont make variables of these names (total 32 keywords)
*/



// Our first C program

#include<stdio.h>

int main(){
    printf("Hello, I am learning C with Harry");
    return 0;
}




/*
The basic structure of a C program

All c programs have to follow a basic structure. A c program starts with the main function and executes instructions presents inside it. Each instruction terminated with a semicolon(;)

There are some basic rules which are applicable to all the c programs:

Every programs execution starts from the main function.
All the statements are terminated with a semi-colon.
Instructions are case-sensitive.
Instructions are executed in the same order in which they are written.






Comments
Comments are used to clarify something about the program in plain language. It is a way for us to add notes to our program. There are two types of comments in c:

Single line comment: //This is a comment.
Multi-line comment : /*This is multi-line comment*/
/*Comments in a C program are not executed and ignored.




Compilation and Execution

first.c---------gcc compiler------first.exe

A compiler is a computer program that converts a c program into machine language so that it can be easily understood by the computer.
A program is written in plain text. This plain text is a combination of instructions in a particular sequence. The compiler performs some basic checks and finally converts the program into an executable.

toh basically compiler aapko ek c file ko exe extension mein convert krke de deti hai , here we are using a mingw gcc compiler jo ki hamare kahe gaye name extension mein convert kr ke de dega.
par .c ko .exe mein karne ka fayda kya hai?
faayda ye hai ki .c file compiled nahi hai to share karne par user will have to compile it and then use it whereas .exe file is now compiled, so if a person just goes and executes it in the powershell or cmd it is executable.
first.exe is a easily runned program by any windows

also compiler checks that the written program is correct and executable if its all corect then only will it convert it.



/*

Library functions
C language has a lot of valuable library functions which is used to carry out a certain task; for instance, printf function is used to print values on the screen.

printf("This is %d",i);

here,

%d for integers

%f for real values

%c for characters




Types of variables and how to write them:

Integer variables	
int a=3;

Real variables	
int a=7.7 (this is wrong as 7.7 is real constant) ;
float a=7.7 (this is correct way of writing a real variable );

Character variables
char a='B'  ;

*/