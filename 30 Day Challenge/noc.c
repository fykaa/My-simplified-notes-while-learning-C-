#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[238];
    printf("enter s\n");
    scanf("%ds", &s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (i%2==0)
        {
            printf("%c", s[i]);
        }
    }
    printf("  ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (i%2!=0)
        {
            printf("%c", s[i]);
        }
    }
    
    return 0;
}