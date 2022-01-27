

#include<stdio.h>
int fib(int i);
int main()
{
    int n;
    printf("Enter the term no. of FIbinacci serie\n");
    scanf("%d", &n);
    for (int i =0; i <=n; i++)
    {
        printf("The element %d of Fibanaccci serie is %d\n", i, fib(i));
    }
    return 0; 
}
int fib(int i){
    if ( i==1){
        return 0;
    }
    else if (i==2)
    {
        return 1;
    }
    else{
        return fib(i-1) + fib(i-2);
    }   
}










#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("ENTER n\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
       printf("The element %d of Fibanaccci serie is %d\n", n, fib(n));
    }
    return 0; 
}
int fib(int n){
    if ( n==1){
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }   
}





#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("Enter the term no. of FIbinacci serie\n");
    scanf("%d", &n);
    printf("The element %d of Fibanaccci serie is %d\n", n, fib(n));
    return 0;
}
int fib(int n){
    if ( n==1){
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }   
}