
#include<stdio.h>

int main()

{
    int a = 2;
    float b = 3.42;
    char c = 'u';
    int d = 45;
    int e = 45 + 3;

    printf("the value of integer is %d \n", a);
    printf("the value of float is %f \n" , b);
    //IF YOU WANT ONLY 'n' numbers after decimal in a float then use %.nf  where n is number of digits after decimal
    printf("the value of float WITH ONLY TWO DECIMALS  is %.2f \n" , b);
    printf("the value of character is %u \n", c);
    printf("the value of d is %d \n", d);
    printf("the value of e is %d \n", e);
    return 0;
}
