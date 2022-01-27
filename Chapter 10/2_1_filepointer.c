/*
File pointer
The "File" is a structure that needs to be created for opening the file. A file pointer is a pointer to this structure of the file.

File pointer is NEEDED for communication between the file and the program.

@file pointer use karke you can open a file in different different modes like read , write , in binaryetc.


A file pointer can be created as follows:

FILE *ptr;          //FILE is basically a structure datatype
ptr= fopen("filename.ext","mode");          //@mode is something asking ki read krna h ya write krna h

@here ext can be any extension like .txt , .c, 

*/




//OPENING FILE IN READ AND WRTIE MODE:

#include<stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("sample.txt", "r");  //----for reading the file
    ptr = fopen("sample.txt", "w");  //----for writing to a file
    return 0;
}
