// Chapter 4 - Practice Set 


/*if the program doesnt works even after removing comment then copy paste it to another new file and run, it works*/

//   1. Write a program to print the multiplication table of a given number n.
//ANSWER1:
// #include<stdio.h>
// int main()
// {
//   int i=0 , n;
//   printf("enter number n\n");
//   scanf("%d", &n);
//   while (i<=10){
//     printf("%d x %d = %d\n", n,i, i*n);
//     i++;
//   }
//   return 0; 
// }


  // 2. Write a program to print a multiplication table of 10 in reversed order
//ANSWER2:
// #include<stdio.h>
// int main()
// {
//   int n, i;
//   printf("Enter the value of n:\n");
//   scanf("%d",&n);
//   for (i=10; i>=0; i--){
//     printf("%d x %d = %d\n", n, i, i*n);
//   }
//   return 0; 
// }




  // 3. A do-while loop is executed:
  //     At least once
  //     At least twice
  //     At most once
//ANSWER3:
//a do-while loop will definately execute ATLEAST ONCE no matter the condition is false in while section, but do while loop will execute atleasst once!


  // 4. What can be done using one type of loop can also be done using the other two types of loops – True or False.
  //answer4:
  // While Loop    = The block keeps executing as long as the condition is true
  // do-while loop = while loop which executes at least once
  // for loop =   for( initialize; test; increment or decrement)


  // 5. Write a program to sum the first ten natural numbers using a while loop.
//answer5:
//by me:
// #include<stdio.h>
// int main()
// {
//   int sum=0 , i = 0, n;
//   printf("enter n\n");
//   scanf("%d", &n);
//   while (i<=n)
//   {
//     sum+=i;
//     i++;
//     if (i>n)
//     {
//       printf("sum is %d", sum);
//     }
//   }
//     return 0;
// }

//BY SIR;
// #include<stdio.h>
// int main()
// {
//   int i=1, sum=0, n;
//   printf("enter n\n");
//   scanf("%d", &n);
//   while (i<=n)
//   {
//     sum+=i;
//     i++;
//   }
//   printf("the sum of %d natural  numbers is %d", n, sum);
//   return 0; 
// }

//same using forloop;
// #include<stdio.h>

// int main()
// {
//   int n, sum=0;
//   printf("enter n\n");
//   scanf("%d", &n);
//   for (int i = 0; i <= n; i++)
//   {
//     sum+=i;
//   }
//   printf("the sum is %d", sum);
//   return 0; 

// }



  // 6. Write a program to implement program 5 using for and do-while loop.
//ANSWRR6;
 
// #include<stdio.h>
// int main()
// {
//   int i=0, sum=0 , n=9;
//   do
//   {
//     sum+=i;
//     i++;
//   } while (i<=n);
//   printf("the value of sum is %d", sum);
//   return 0; 
// }



  // 7. Write a program to calculate the sum of the numbers occurring in the multiplication table of 8.(Consider 8x1 to 8x10)
//answer 7;
// #include<stdio.h>
// int main()
// {
//   int n=8, sum=0, x;
//   for (int i = 0; i <=10; i++)
//   {
//     x= i*n;
//     sum+=x;
//   }
//   printf("the sum of all these is : %d", sum);
//   return 0; 
// }


  // 8. Write a program to calculate the factorial of a given number using for loop.
//answer 8:

// #include<stdio.h>
// int main()
// {
//   int n=8, x=1 ;
//   for (int i =1; i <=n; i++)
//   {
//     x*=i;
//     //CAN ALSO USE : x=x*i;
//   }
//   printf("the value of %d! is %d",n, x);
//   return 0; 



  // 9. Repeat 8 using a while loop.
//answer 9:
// #include<stdio.h>
// int main()
// {
//   int x=1, i=1, n=5;
//   while (i<=n)
//   {
//     x= x*i;
//     i++;
//   }
//   printf("the value of %d! is %d", n, x);
//   return 0; 
// }


  // 10. Write a program to check whether a given number is prime or not using loops.
//answer10:

// #include<stdio.h>

// int main()
// {
//   int  prime=0, num=3;
//   for (int i=2; i<num; i++)
//   {
//     if (num%i==0)
//     {
//       prime=0;
//       break;
//     }
//   }
//   if (prime==0 && num!=2){                                        //look if here you wrote prime=1 then it would assume you are saying that PRIME IS 1 and hence this if statement would have no matter what, but specifying prime==1 means you are asking if it is , only then run the if statement.
//     printf("This is not a prime number");
//   }
//   else{
//     printf("This is a prime number");
//   }
//   return 0; 
// }




  // 11. Implement 10 using other types of loops.

  //USING WHILE LOOp;
// #include<stdio.h>
// int main()
// {
//   int prime=0, n=2, i = 2;
//   while (i < n)
//   {
//     i++;
//     if (n%i==0)
//     {
//       prime=0;
//       break;
//     }
//   }
//   if (prime==0 && n!=2)
//   {
//     printf("its not prime");
//   }
//   else{
//     printf("its prime");
//   }
//   return 0; 
// }


// //using dowhile loop:
//bored