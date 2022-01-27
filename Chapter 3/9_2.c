// 2.Write a program to find out whether a student is pass or fail; 
//if it requires a total of 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as input from the user.

// #include<stdio.h>

// int main()
// {
//     int hindi, english, urdu;
//     printf("enter marks in hindi\n");
//     scanf("%d", &hindi);
//     printf("enter marks in english\n");
//     scanf("%d", &english);
//         printf("enter marks in urdu\n");
//     scanf("%d", &urdu);

//     if(hindi>33 && english>33 && urdu>33){
//         printf("YOU ARE PASS\n");
//     }
//     else if (((hindi + english + urdu)/100)< 40){
//         printf("you are FAIL");
//     }
//     else if(((hindi + english + urdu)/100)>= 40){
//         printf("pass");
//     }
//     else{
//         printf("You are Pass");
//     }
//     return 0; 

// }



#include<stdio.h>

int main()
{
    float sci, math, eng;
    printf("enter sci marks\n");
    scanf("%f", &sci);
    printf("enter math marks\n");
    scanf("%f", &math);
    printf("enter eng marks\n");
    scanf("%f", &eng);

    float total= ((sci+ math+ eng)/3);
    if(total<45 || sci<33 || math<33 || eng<33 ){
        printf("you have got %f you are failed", total);
    }
    else{
        printf("you have got %f percentage you are passed\n", total);

    
    }
    return 0; 

}