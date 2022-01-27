/* Writing to a file

We can write to a file in a very similar manner as we read the file

FILE *fptr;
fptr=fopen("Harry.txt","w");
int num=432;        //THIS WILL OVERWRITE THE CONTENT TO THE FILE
fprintf(fptr,"%d",num);
fclose(fptr);
*/

#include<stdio.h>
int main()
{
    FILE *fptr;
    int num = 45;
    int num2 = 32;
    fptr = fopen("generated.txt", "w");
    fprintf(fptr, "This txt file is created by 7_writingfile.c\n");
    fprintf(fptr, "The num is %d\n", num);
    fprintf(fptr, "The num2 is %d\n", num2);
    fprintf(fptr, "This is an amazing way to write in a txt file without even opening it");
    fclose(fptr);
    return 0;
}