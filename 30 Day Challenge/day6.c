/*
Given a string, S, of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as 2 space-separated strings on a single line (see the Sample below for more detail).

Note: 0 is considered to be an even index.
*/
//my soln

        // #include<stdio.h>
        // #include <string.h>
        // #include <stdlib.h>

        // int main()
        // {
        //     char s[238];
        //     printf("enter s\n");
        //     scanf("%ds", &s);
        //     for (int i = 0; i < strlen(s); i++)
        //     {
        //         if (i%2==0)
        //         {
        //             printf("%c", s[i]);
        //         }
        //     }
        //     printf("  ");
        //     for (int i = 0; i < strlen(s); i++)
        //     {
        //         if (i%2!=0)
        //         {
        //             printf("%c", s[i]);
        //         }
        //     }
            
        //     return 0;
        // }





//hackerrank's given format

        // #include <stdio.h>
        // #include <string.h>
        // #include <math.h>
        // #include <stdlib.h>

        // int main() {
        //     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
        //     return 0;
        // }





//tutorial book's solution
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n; char s[10000];
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
       scanf("%s",s);
       myFunction(s);
    }
   return 0;
}

void myFunction(char s[])
{
    for(int i=0;i<strlen(s);i++)
    {
        if (i%2 == 0)
        {
            printf("%c",s[i]);
        }
    }
    
    printf(" ");

    for(int i=0;i<strlen(s);i++)
    {
        if (i%2 != 0)
        {
            printf("%c",s[i]);
        }
    } 
    
    printf("\n");
}