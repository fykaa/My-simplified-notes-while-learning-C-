/*
Taking string input from the user
We can use %s with scanf to take string input from the user:

char st[50];
scanf(“%s”,&st);
scanf automatically adds the null character when the enter key is pressed.

Note:
The string should be short enough to fit into the array.                i.e. agar 50 chrachters ka string hAI TO USSE zyada store nahi hoga
scanf cannot be used to input multi-word strings with spaces.*/

#include<stdio.h>

int main()
{
    char st[50];
    printf("ENTER YOUR NAME (LESS THAN 50 CHR)\n");
    scanf("%s", st);            //string mein & ki zarurat nahi hai kyuki string khud hi address store karta h
    printf("GOOD MORNING %s\n", st);
    return 0; 
}