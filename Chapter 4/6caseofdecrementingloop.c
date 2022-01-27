// A case of Decrementing in for loop


// for(int i=5; i ; i--)
//    printf(“%d\n”,i);
// This for loop will keep on running until i becomes 0.


// The loop runs in the following steps:
   // 1) i is initialized to 5
   // 2) The condition “i” (0 or none) is tested
   // 3) The code is executed
   // 4) i is decremented
      //IMP; SO BASICALLY Condition i is checked, and the code is executed if it's not 0 AND so on until i is non 0.



// Quick Quiz: Write a program to print n natural numbers in reverse order.

#include<stdio.h>

int main()
{
   for(int i=5; i>=0; i--){
      printf("the natural no. is %d\n", i);
   }
   return 0; 

}


