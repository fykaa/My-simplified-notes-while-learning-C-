// #include<stdio.h>

// int main()
// {
//     printf("values of 3.0/8-2 is:  %f\n", 3.0/8-2);
//     return 0;
// }
//ANSWER IS DOUBLE

//answer is the value returns DOUBLE (not really float) though we often refer decimals as float but actual mein double return horaha h SO MOST ACCURATE ANSWER IS DOUBLE, because double mein precision zyada hota hai hence gcc har decimal wale number ko doublemmaanta hai



// in the below case hamne already keh diya ki float h , hence it will treat the same as a float;

#include<stdio.h>

int main()
{
    float d = (3.0/8-2);
    printf("%f\n", d);
    return 0; 

}