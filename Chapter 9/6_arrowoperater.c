/*
Arrow operator

Instead of writing *(ptr).code, we can use an arrow operator to access structure properties as follows

*(ptr).code or ptr->code

Here '->' is known as an 'arrow operator'.

*/

#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    (*ptr).code = 101;  //ptr->code = 101; (can also write this)
    printf("%d", e1.code);
    return 0; 
}
