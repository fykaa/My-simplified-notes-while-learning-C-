// Increment and decrement operators
// i++  (i is increased by 1) ++i

// i--  (i is decreased by 1)  --i

// printf(“--i=%d”,--i);
// This first decrements i and then prints it

// printf(“i--=%d”,i--);
// This first prints i and then decrements it

// #include<stdio.h>

// int main()
// {
//     int i=5;
//     printf("the value of i++ is %d\n", i++); 
//     printf("the value of i is %d\n",i);
//         //here pehle print kiya fir increment kiya 
//     int z=5;
//     printf("the value of ++z is %d\n", ++z);
//     printf("the value of z is %d\n", z);
//         //here pehle increment hua fir print hua!!
//     return 0; 

// }





//NOTE
// +++ operators does not exists => Important
// += is compound assignment operator just like -=, *=, /= & %= =>Also important

//HOW DOES COMPOUND ASSIGNMENT OPERATOR WORKS:
#include<stdio.h>

int main()
{
    int i= 5;
    printf("the value of i is %d\n", i);
    i+=10;
    printf("the value of i+10 is %d\n", i);
    printf("the value of i-15 is %d\n", i-=15);
    return 0; 

}



