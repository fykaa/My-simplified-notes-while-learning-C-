/*
Standard library functions for Strings

These functions are declared under <string.h> header file.
C provides a set of standard library functions for strings manipulation.
Some of the most commonly used string functions are:

*******************************************************************************************************************************88

1. strlen() - This function is used to count the number of characters in the string excluding the null ('\0') character.
        int length = strlen(st);

EXAMPLE*/
        // #include<stdio.h>
        // #include<string.h>
        // int main()
        // {
        //     char *st = "Harry bhai";
        //     int a = strlen(st);
        //     printf("Length of the string '%s' is %d\n", st, a);      //HERE SPACE IS COUNTED BUT NULL CHARACTER IS NOT COUNTED
        //     return 0; 
        // }
/*
*********************************************************************************************************************************


2. strcpy() - This function is used to copy the content of second string into first string passed to it.
        char source[ ]= "Harry";
        char target[30];
        strcpy(target,source);      => target now contains "Harry"
    Target string should have enough capacity to store the source string.

EXAMPLE*/
        // #include<stdio.h>
        // #include<string.h>
        // int main()
        // {
        //     char *string1 = "Harry";
        //     char string2[40];
        //     strcpy(string2, string1);       //string2 now contains "harry"
        //     printf("NOW THE STRING2 IS %s\n", string2);
        //     return 0; 
        // }
/*

*********************************************************************************************************************************

3. strcat() - This function is used to concatenate two strings

        char s1[11]= "Hello";
        char s2[ ]= "Harry";
        strcat(s1,s2);                   => s1 now contains “Hello Harry” <No space in between>
EXAMPLE */
        // #include<stdio.h>
        // #include<string.h>
        // int main()
        // {
        //     char string1[11]= "Hello";
        //     char string2[] = "Harry";
        //     strcat(string1, string2);
        //     printf("The string 1 is now %s\n", string1);        //remember space nahi aayega
        //     printf("The string 2 is now %s\n", string2);
        //     return 0; 
        // }
/*

*********************************************************************************************************************************

4. strcmp() - This function is used to compare two strings. 
    It returns: 0 if strings are equal
    Negetive value if first strings mismatching character's ASCII value is not greater than second string's corresponding mismatching character.
    It returns positive values otherwise.

        strcmp("For", "Joke");                      => positive value
        strcmp("Joke", "For");                      => Negative value
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char st1[45] = "Hello";
    char *st2 = "Hello";
    char st3[45] = "Hey";
    char *st4 = "Harry";
    char st5[45] = "Harry";
    char *st6 = "Hey";
    int val1 = strcmp(st1, st2);
    int val2 = strcmp(st3, st4);
    int val3 = strcmp(st5, st6);
    printf("For same strings the value is %d\n", val1);
    printf("Here 1st mismatched string has a difference of e-a i.e. positive, hence the value is %d\n", val2);
    printf("Here 1st mismatched string has a difference of a-e i.e. negative, hence the value is %d\n", val3);
    return 0; 
}

//basically program does st1-st2 with the mismatching character (COMPARING THE ASCII Values of each character!) 
    //if value is positive it gives +1, 
    //if its equal it gives 0, 
    //if its negative it gives -1.