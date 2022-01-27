/* EOF: End of File

fgetc returns EOF when all the characters from a file have read.
So we can write a check like below to detect the end of file.

    while(1)
    {
        ch=fgetc(ptr);	   // When all the content of a file has been read, break the loop
        if(ch==EOF)
        {
            break;
        }
        //code
    } 
*/


#include<stdio.h>
int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("endfile.txt", "r");
    c = fgetc(ptr);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}
