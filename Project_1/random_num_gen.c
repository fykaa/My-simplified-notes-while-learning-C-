#include<stdio.h>
#include<stdlib.h>    //we'll have to include this library so that we can use the random number generator tool i.e. "rand()";
#include<time.h>    //just library stdlib.h cant initialise the random statemen it throws same number 41 all the time hence, we use this for giving a range to random num generator.

//all the functions we are using are coming from the hetera files, like printf is coming from the stdio,h similarly rand and srand from stdlib.h and time.h resepectively.
int main()

{
    int number; 
    srand(time(0));     //time 0 seconds mein time return karta hai, issse har baaar alag number aayega.
    // number = rand(); //using this we had no range of generating random number;
    number = rand()%100 + 1;        //this generates random number ONLY between 1 to 100.
    printf("The number is %d", number);  
    return 0;
}