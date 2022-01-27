
#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf(" Enter n\n");
    scanf("%d", &n);
    printf("The sum of %d natural numbers is %d", n, sum(n));
    return 0; 
}
int sum(int n){
    int x=0, i;
    for (int i = 0; i <=n; i++);
    {
        x=+i;
    }
    return x;
}
