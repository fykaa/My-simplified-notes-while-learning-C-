#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


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


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    char s[1000];
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
       scanf("%s",s);
       myFunction(s);
    }
    return 0;
}
