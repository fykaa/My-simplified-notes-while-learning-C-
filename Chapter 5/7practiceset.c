// Chapter 5- Practice Set


// Write a program using functions to find the average of three numbers.
// ANSWER1
            // #include<stdio.h>
            // float average(int a, int b, int c);
            // int main()
            // {
            //     int a,b,z;
            //     printf("ENTER a\n");
            //     scanf("%d",&a);
            //     printf("ENTER b\n");
            //     scanf("%d",&b);
            //     printf("ENTER z\n");
            //     scanf("%d",&z);
            //     printf("the average of %d, %d and %d is %f",a,b,z, average(a,b,z));  //mark this abc and abz fromhere we proove that different functions with same named variables has no same work, like abz is from main funcion, abc is from change function, same name but works different place
            //     return 0; 
            // }
            // float average(int a, int b , int c){
            //     float result;
            //     // result = (a+b+c)/3; -----isme abc are integers hence program will throw a integer removing the decimals , hence to get exact correct answers we NEED TO TYPECAST RESULT into a float
            //     result= (float)(a+b+c)/3;  //--TYPECASTING RESULT into a float
            //     return result;
            // }

// Write a function to convert Celcius temperature into Fahrenheit.
//ANSWER2
            // #include<stdio.h>
            // float celcius(float degree);
            // int main()
            // {
            //     float degree;
            //     printf("ENTER TEMP IN CELCIUS\n");
            //     scanf("%f", &degree);
            //     printf("THE TEMP in farhenhite will be %f", celcius(degree));
            //     return 0; 
            // }
            // float celcius(float degree){
            //     float far;
            //     far = (float)(degree* 9 / 5 ) + 32 ;
            //     return far;
            // }

// Write a function to calculate the force of attraction on a body of mass m exerted by earth. (g=9.8m/S2)
//ANSWER 3
            // #include<stdio.h>
            // float foa(int m);
            // int main()
            // {
            //     int m;
            //     printf("ENTER MASS OF BODY\n");
            //     scanf("%d", &m);
            //     printf("THE FORCE OF ATTRACTION of body of mass %d by earth is %f\n", m, foa(m));
            //     return 0; 
            // }
            // float foa(int m){
            //     float force;
            //     force= (float)(m*9.8);
            //     return force;
            // }

// Write a program using recursion to calculate the nth element of the Fibonacci series.
//ANSWER4

            // FIBONACCI serie: 
            //0,1,1,2,3,5,8,13,21,34,..............
            //here we are adding previous two numbers for every next number.
            //Basically it is:------  fib(n)= fib(n-1)+ fib(n-2)------here n is representing term.

                                    // #include<stdio.h>
                                    // int fib(int n);
                                    // int main()
                                    // {
                                    //     int n=3;
                                    //     printf("The nth element of Fibonacci serie is %d", fib(n));
                                    //     return 0; 
                                    // }

                                    // int fib(int n){
                                    //     int fib=0
                                    //     for (int i = 0; i <=count; i++)
                                    //     {
                                    //         /* code */
                                    //     }
                                        
                                    // }

                                    // #include<stdio.h>

                                    // int main()
                                    // {
                                    //     int fabinacci= 1, n=10, x;
                                    //     printf("The Fabinacci serie is;\n");
                                    //     for (int i = 0; i <=10; i++)
                                    //     {
                                    //         if (n=0)
                                    //         {
                                    //             fabinacci= 0;
                                    //         }
                                    //         else if (n=1)
                                    //         {
                                    //             fabinacci= 1;
                                    //         }
                                    //         else{
                                    //             fabinacci(n)= fabinacci(n-1) + fabinacci(n-2);
                                    //         }

                                    //     }
                                    //     return 0; 
                                    // }



            // #include<stdio.h>
            // int fib(int n);
            // int main()
            // {
            //     int n;
            //     printf("Enter the term no. of FIbinacci serie\n");
            //     scanf("%d", &n);
            //     printf("The element %d of Fibanaccci serie is %d\n", n, fib(n));
            //     return 0;
            // }
            // int fib(int n){
            //     if ( n==1){
            //         return 0;
            //     }
            //     else if (n==2)
            //     {
            //         return 1;
            //     }
            //     else{
            //         return fib(n-1) + fib(n-2);
            //     }   
            // }

//0,1,1,2,3,5,8,13,21,34.......





// What will the following line produce in a C program: printf(“%d %d %d\n”,a,++a,a++);
// //ANSWER5
// #include<stdio.h>
// int main()
// {
//     int a=3;
//     printf("%d\t %d\t %d\t\n", a, ++a, a++);
//     return 0; 
// }

        // 5 5 3 is printed! ekdam alag
        //REASON; when you pass arguments to a funtion its NOT executed in a order from LEFT to RIGHT, in REALITY arguments are passed from right to left;;----but it also depends on compiler
        //SOO:
        //1. for a++ -----3 is printed (print then increase);
        //2. for ++a -----5 is printed (increase then print);
        //3. for a -------5 is printed (as 5 was the value);
        //THEN the program returns the code in the same form as earlier; i.e for a , ++a, a++ = 5,5,3;
                
//To enhance your performance in the interview, If interviewer asks you this question say:
//for answering the output of this i need to know the behaviour of compiler, is it from l2r or r2l., in accordance with gcc compiler it will be right to left;





// Write a recursive function to calculate the sum of first n natural numbers
//Answer6

                    // #include<stdio.h>
                    // int sum(int n);
                    // int main()
                    // {
                    //     int n;
                    //     printf(" Enter n\n");
                    //     scanf("%d", &n);
                    //     printf("The sum of %d natural numbers is %d", n, sum(n));
                    //     return 0; 
                    // }
                    // int sum(int n){
                    //     int x=0, i;
                    //     for (int i = 0; i<=n; i++)
                    //     {
                    //         x+=i;
                    //     }
                    //     return x;
                    // }


// Write a program using functions to print the following pattern(first n lines):

// *

// ***

// *****




//ANSWER7


#include<stdio.h>
void printpattern(int n);           
int main()
{
    int n = 4;
    printpattern(n);
    return 0; 
}
void printpattern(int n){
    if (n==1){              
        printf("*\n");
        return;
/*matlab jab n ki value 1 hai tab sirf * print kro and n=2 nahi hai toh vo pehle n=1 ke 
liye print karega,  and star ko utni baar print karega jitne star aane wale hai line n mein ie. 
if n=2 then 2n-1 = 3 stars, n=3 then 2n-1=5 stars and so on*/

    }
    printpattern(n-1);
    for (int i = 0; i <(2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
}