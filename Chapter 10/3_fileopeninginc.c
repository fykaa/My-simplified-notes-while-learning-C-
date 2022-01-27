/* File opening modes in C

C offers the programmers to select a mode for opening a file.

Following modes are primarily used in c File I/O


"r"  --> Open for Reading  (@a text file)
                                        >if the files does'nt exist, fopen() returns NULL.
"rb" --> Open for Reading in Binary


"w"  --> Open for Writing  (@a text file)
                                        >if the file exist, the contents will be overwritten.       //@ OVERWRITE matlab existing texts mitt jayega and jo aapne likha hai vo write hojayega
"wb" --> Open for Writing in Binary


"a"  --> Open for Append                >if the file does'nt exist, it will be created.     //@ kisi bhi file ke end mein content jodne ko append kehte hai eg. hello--->append---> helloharry



@aur bhi modes hote hai but yeh most used hai
 */


#include<stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("notexistingfile.txt", "r");  //--file did'nt exist--In reading --- RETURNS NULL
    ptr = fopen("created.txt", "w");         //--file did'nt exist--In Writing --- CREATES THE FILE    
    //you see a WRITE program is itself creating the file that doesnt exists already
    return 0;
}