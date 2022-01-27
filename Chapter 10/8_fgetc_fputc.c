/* fgetc() and fputc()

fgetc and fputc are used to read and write a character from/to a file.

fgetc(ptr);                         => Used to read a character from file           //alternative is: 
                                                                                                        int num;
                                                                                                        fscanf(ptr, "your text %d", num);

fputc('c',ptr);                     => Used to write character 'c' to the file    //alternative is:
                                                                                                        fprintf(ptr, "print this text %d", num);
                                                                                        



*/

//fgetc reads the txt file CHARACTER BY CHARACTER
// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("getc_demo.txt", "r");
//     // char c = fgetc(ptr);

//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//     printf("The value of my character is %c\n", fgetc(ptr));
//      fclose(ptr);
//     //SO fgetc is reading the txt file CHARACTER BY CHARACTER
//     return 0;
// }


//fputc prints in the txt file character by character
#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("putc_demo.txt", "w");
    // fprintf(ptr, "This is a demo file created for putc");
    fputc('c', ptr);
    fputc('h', ptr);
    fputc('o', ptr);
    fclose(ptr);
    return 0;
}
