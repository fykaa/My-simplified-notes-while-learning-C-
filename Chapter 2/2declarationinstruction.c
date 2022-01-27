// Type of declaration instruction:
//exmple:

// int a;
// float b;




// other variations we can make:

// #include<stdio.h>

// int main()
// {
//     int i = 10;
//     int j = i;
//     int a = 2;
//     int j1 = a + j - i +4 ;             //here it took instructions stepwise like considering i = j and hence executed the program properly
//     printf("j1 is %d", j1);
//     return 0; 

// }





// #include<stdio.h>

// int main()
// {
//     float b = a+3;
//     float a = 1.1;                 //     ==> here there will occur an Error! As we are trying to use 'a' before defining it. HENCE PROOVED instructions are running stepwise 
//     printf("the value of b %f", b);
//     return 0; 

// }


#include<stdio.h>

int main()
{
    float a = 1.1; 
    float b = a+3;                //     ==> here NO ERROR ocurs! As we are trying to use 'a' after defining it. HENCE PROOVED instructions are running stepwise 
    printf("the value of b %f", b);
    return 0; 

}
