//CHANGE IS A FUNCTION THAT CAN CHANGE eg. a to 77 here which is a false/ misnomer value of a but for this you require a pointer and not direct change named function.


                // int change(int a)
                // {
                //     a=77;                         //=> Misnomer(matlab ek galat naam)
                //     return 0;
                // }

                // //HERE, change is a function which changes a to 77. No, if we call it from main like this:

                // int b=22;
                // change(b);                            //=> The value of b remains 22
                // printf("b is %d",b);                  //=> prints “b is 22”
                // //HERE, This happens because a """copy of b""" is passed to the change function.

#include<stdio.h>
void change(int a);
int main()
{
    int b = 344;
    printf("the value of b before change is %d\n", b );
    change(b);                                                  //this is main function ka b //HAR FUNCTION KE APNE ALAG LOCAL VARIABLES HOTE HAI
    printf("the value of b after change is %d\n", b);
    return 0; 

}
void change(int b ){
    b = 77;                                                     //this is change function ka b //HAR FUNCTION KE APNE ALAG LOCAL VARIABLES HOTE HAI

}
//so you see the value of b remains same after and before change(b); change karne ke liye pointers hote hai vo aage aayega; 


// Quick Quiz: Use the library function to calculate the area of a square with side a.

#include<stdio.h>
#include<math.h>

int main()
{
    int side;
    printf("side is ?");
    scanf("%d", &side);
    // printf("the area of the circle is %d", side*side);
    printf("the area of square is %f", pow(side, 2));       //pow is a library function
    return 0; 

}