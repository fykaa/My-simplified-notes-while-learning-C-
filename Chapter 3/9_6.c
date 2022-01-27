// 6.Write a program to find the greatest of four numbers entered by the user.


#include<stdio.h>

int main()
{
    int n1,n2,n3,n4;
    printf("enter number 1\n");
    scanf("%d", &n1);
    printf("enter number 2\n");
    scanf("%d", &n2);
    printf("enter number 3\n");
    scanf("%d", &n3);
    printf("enter number 4\n");
    scanf("%d", &n4);

    if(n1>n2 && n1>n3 && n1>n4){
        printf("%d is the greatest number\n", n1);
    }
    else if(n2>n1 && n2>n3 && n2>n4){
        printf("%d is the greatest number\n", n2);
    }
    else if(n3>n2 && n3>n1 && n3>n4){
        printf("%d is the greatest number\n", n3);
    }
    else {
        printf("%d is the greatest number\n", n4);
    }
    return 0; 

}