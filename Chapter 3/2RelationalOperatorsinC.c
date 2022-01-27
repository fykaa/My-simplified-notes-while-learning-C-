//Relational Operators in C

// Relational operators are used to evaluate conditions (true or false) inside the if statements. Some examples of relational operators are:

    // =    assignment operator(not a relational operator)
    // ==	equals to
    // >=	greater than or equal to
    // >	greater than
    // <	less than
    // <=	less than or equal to
    // !=	not equal to

// Important Note: '=' is used for an assignment, whereas '==' is used for an equality check.

// The condition can be any valid expression. In C, a non-zero value is considered to be true

// #include<stdio.h>

// int main()
// {
//     int age;
//     printf("enter ur age\n");
//     scanf("%d", &age);

//     if(age>=90){
//         printf("you are above 90 and\n");
//     }
//     else{
//         printf("you are below 90 and\n");
//     }
//     if(age==50){
//         printf("half century");
//     }
//     if(age<18){
//         printf("you shouldn't drive you are below 18\n");
//     }
//     else{
//         printf("you can drive\n");
//     }
//     return 0; 

// }



//very logical question related to = and == i.e. assignment and relational operator.

    // #include<stdio.h>

    // int main()
    // {
    //     int age;
    //     printf("enter age\n");
    //     scanf("%d",&age);

    //     if(age=50);
    //     {
    //         printf("half century");
    //     }
    //     return 0; 
    // }

//in the above code even tho you not enter 50 it is still printing "half century"!!!
//the reason is age=50 doesnt means relational operator, it is a assignment operator and we have assigned value 50(which is non zero hence TRUE) to 'age'. 
//so if as age is a non zero value 50 it will be assumed true and hence no matter what you enter it will take if age condition as true and print the respective.
// so the correct code will be:
    #include<stdio.h>

    int main()
    {
        int age;
        printf("enter age\n");
        scanf("%d",&age);

        if(age==50){
            printf("half century");
        }
        return 0; 
    }
