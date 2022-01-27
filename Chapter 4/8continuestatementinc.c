// The continue statement in c
    // The continue statement in c is used to immediately move to the next of the loop. The control is taken to the next iteration, thus skipping everything below continue inside the loop for that iteration.

// Let us look at an example:

#include<stdio.h>

int main()
{
    int skip=5, i=0;
    while(i<10){	
        i++;
        if(i!=skip)  //that if i is NOT equal to skip	
        {
            continue;
        }
        else
        {
            printf("%d",i);
        }
        
// Output: 5 ;and not 0................9
    }
    return 0; 

}






// Notes:

// 1. Sometimes, the name of the variable might not indicate the behavior of the program.;;;;matlab abhi hamne skip naam diya 5 ko but still 5 was not skipped, toh matlab naam kuch bhi de sakte hai usse program execution mein faral mahi padhta but remember interview aise names dekar confuse  krte hai!

// 2. Break statement completely exits the loop

// 3. Continue statement skips the particular iteration of the loop


