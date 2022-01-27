// Q4. Explain step by step evaluation of 3*x/y-z +k


// 3*x/y-z+k
//by operator precedence and associatives:

// 3*x
// (3*x)/y
// ((3*x)/y)-z
// (((3*x)/y)-z)+k


#include<stdio.h>

int main()
{
    int x=2, y= 3, z= 3, k= 1;
    printf("%d",3*x/y-z+k );
    return 0; 

}