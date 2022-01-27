// Else if clause
    // Instead of using multiple if statements, we can also use else if along with if, thus forming an if-else if-else ladder.

        // Using if-else if-else reduces indents.
        // The last “else” is optional.
        // Also, there can be any number of “else if.”
        // Last else is executed only if all conditions fail.



#include<stdio.h>

int main()
{
    int num;
    printf("enter number");
    scanf("%d", &num);

    if(num==1){
        printf("your number is 1\n");
    }
    else if(num==2) {
        printf("your number is 2\n");
    }
    else if(num==3) {
        printf("your number is 3\n");
    }
    else{
        printf("your number is not 1,2 or 3\n");
    }

    printf("hogya kaam");
    return 0; 

}

//VERY IMPORTant:
    // SAARE if and else if MEIN SE KOI EK HI EXECUTE HOGA
    // if AND if else INSTRUCTION STEPWISE EXECUTE HONGE
    // AGAR EK BHI NAHI HUA TOH SEEDHA else execute hoga
    // AGAR if and else if MEIN SE KOI EK EXECUTE HOGYA TOH SEEDHA else KE BAAD WALE PROGRAMS EXECUTE HONGE





                    // Using if-else if-else reduces indents.
                // The last “else” is optional.
                // Also, there can be any number of “else if.”
                // Last else is executed only if all conditions fail.
