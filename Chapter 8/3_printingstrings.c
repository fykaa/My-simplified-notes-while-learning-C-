/*Printing Strings
A string can be printed character by character using printf and %c.

But there is another convenient way to print strings in C.

char st[] = "HARRY";

printf(“%s”,st);    => prints the entire string
*/

//i.e. you dont have to run a entire loop to just print a simple string;
//NOOB WAY OF PRINTING STRINGS;
                    // #include<stdio.h>
                    // int main()
                    // {
                    //     char s[]= "harry";
                    //     for (int i = 0; i < 5; i++)
                    //     {
                    //         printf("%c is the %d element of the array s\n",s[i], (i+1) );
                    //     }
                    //     for (int i = 0; i < 5; i++)
                    //     {
                    //         printf("%c",s[i]);
                    //     }
                    //     return 0; 
                    // }

//ANOTHER WAY OF PRINTING STRINGS;
#include<stdio.h>
int main()
{
    char s[]= "harry is amazing teacher";
    printf("%s", s);
    return 0; 
}