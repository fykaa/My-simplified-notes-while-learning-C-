// The Break Statement in C
    // The break statement is used to exit the loop irrespective of whether the condition is true or false. Whenever a “break” is encountered inside the loop, the controls are sent outside the loop.

// Let us see with an example:



#include<stdio.h>

int main()
{
    for (int i=0; i<100; i++)
    {
        printf("%d\n",i);
        if (i==5)
        {
        break;
        }
    //so here Output will be : 0, 1, 2, 3, 4, 5 and not 0 to 100!
    }
    return 0;
}

//break loop ko maar dalega,hahahahha