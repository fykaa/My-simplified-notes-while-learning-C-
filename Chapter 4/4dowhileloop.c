// Do-while loop:
// The syntax of do-while loop looks like this:

    // do {
    //     //code;
    // }while(condn);


//some points to remebr:
    // Do-while loop works very similar to while loop

    // While -> checks the condition & then executes the code

    // Do-while -> executes the code & then checks the condition

    // IMP: do-while loop = while loop which executes at least once



// #include<stdio.h>

// int main()
// {
//     int i= 220;
//     do{
//         printf("the value of i is %d\n", i);
//         i++;
//     }while(i<10);
//         //so as seen it ran the loop only once that is the do loop and when it went to the while condition it found it false 
//         //hence didnt run the do loop again and moved ahead, 
//         //if while condition became true it wud run do again unless while condition becomes false, 
//         //so you see ek baar to run hoga hi!
//     return 0; 

// }




//do while loop ek aisa while loop hai jo kam se kam ek baar zaroor chalta hai, 
    //eg of its usage: like games mein, ek baar you play it for sure, then next time while loop asks you "do you wana play again?", if you say yes then good if no then while loop wont work further, hence do while loop lets you pla for once adn then asks if you want  to play again.



    //quick quiz:
    //write a program to print first n natural numbers do-while loop
    //input;4
    //output;1234

   #include<stdio.h>
   
   int main()
   {
       int i=1, n;
       printf("enter value of n");
       scanf("%d", &n);

       do{
           printf("the value of n is %d\n", i);
           i++;
       }while(i<=n);
       return 0; 
   }