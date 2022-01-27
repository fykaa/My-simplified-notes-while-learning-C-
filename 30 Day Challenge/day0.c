/*
Task: 
Day 0 Hello World HackerRank Solution, 
To complete this challenge, you must save a line of input from stdin to a variable, print Hello, World. 
on a single line, and finally, print the value of your variable on a second line.

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* 
This is a "Day 0 Hello World" Programming Solution of hackerRank 30 Days of Code 
HackerRank Solution by Tutorials Bookmarks. You can find all HackerRank 
Subdomain Introduction, Strings, Classes, STL(Standard Template Library), 
Inheritance, Other Concepts, Algorithms, Miscellaneous, and Data Structure 
Solutions in C, C++, Java, and Python.
Visit Here: https://tutorialsbookmarks.com/30-days-of-code-solution-hackerrank/
*/

int main() 
{
    /* Declare a variable named 'input_string' to hold our input.*/
    char input_string[105]; 
    
    /* Read a full line of input from stdin and save it to our variable, input_string.*/
    scanf("%[^\n]", input_string); 
    
    /* Print a string literal saying "Hello, World." to stdout using printf.*/
    printf("Hello, World.\n");
    
    /* TODO: Write a line of code here that prints the contents of input_string to stdout.*/
    
	/* Solution starts from here */
	
	printf("%s",input_string);
	
    /* Solution ends here */
	return 0;
}