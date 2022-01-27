/* gets() and puts()

gets() is a function that can be used to receive a multi-word string.
        char st[30];
        gets(st);                         => the entered string is stored in st!
    Multiple gets() calls will be needed for multiple strings.


puts(st);   => Prints the string and places the cursor on the next line
Likewise, puts can be used to output a string.*/

#include<stdio.h>
int main()
{
    char s[30];
    printf("Enter Fullname:\n");
    gets(s);                        //used instead of scanf("%s", s); because it doesnt allow multiple words.
    puts(s);                        //used instead of printf("Good morning %s", s); because it can put the cursor on the next line kuch khaas nahi
    return 0; 
}
