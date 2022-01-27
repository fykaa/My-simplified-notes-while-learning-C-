/*Strings in memory
A string is sorted just like an array in the memory as shown below
                                      
H       A     R     R     Y    \0 (here \0 is a null character)
82210 82211 82212 82213 82214 82215


Quick Quiz: Create a string using " " and print its content using a loop. */

#include<stdio.h>

int main()
{
    char s[]= "harry";
    for (int i = 0; i < 5; i++)
    {
        printf("%c is the %d element of the array s\n",s[i], (i+1) );
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c",s[i]);
    }
    return 0; 
}