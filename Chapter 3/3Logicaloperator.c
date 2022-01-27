// Logical Operators:
    // &&  and
    // ||  or
    // !   not
                // &&, ||, and ! ----------------are the three logical operators in C. 
             // These are read as “and,””or,” and “not.” They are used to provide logic to our c programs.


//here;
// 1 is true
// 0 is false


// Use of logical operators:

    // 1. && (AND) is true when both the conditions are true

    //     “1 and 0” is evaluated as false

    //     “0 and 0” is evaluated as false

    //     “1 and 1” is evaluated as true

    // 2. || (OR) is true when at least one of the conditions is true. 
    //      (1 or 0 = 1)true
    //      (1 or 1 = 1)true
    //      (0 or 0 = 0)false

    // 3. ! returns true if given false and false if given true.

    //     !(3==3) evaluates to false

    //     !(3>30) evaluates to true


#include<stdio.h>

int main()
{
    int age,  vipPass ; //, vipPass= 1;
    printf("enter age\n");
    scanf("%d", &age);
    printf("vip pass 1 or 0");
    scanf("%d", &vipPass);

    if((age>=18 && age<90)|| (vipPass==1) && (vipPass==0)) 
    {
        printf("yes you can drive");
    }
    else{
        printf("youre not allowed to drive");
    }
    return 0; 

}



// As the number of conditions increases, the level of indentation increases.
// This reduces readability.
// Logical operators come to the rescue in such cases.








