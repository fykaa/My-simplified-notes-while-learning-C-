/*
Task
Given an arrayA, , of N integers, print A's elements in reverse order as a single line of space-separated numbers.

Example
*/
//my soln
//(the thing wrong in this is that i'm changing the size of array myself that is A[n] which is NOT AT ALL allowed in C programming
    // without using malloc function from stdlib.h library!!  (you studied this in chapter 11 of Cprog course!!))
            // #include<stdio.h>

            // int main()
            // {
            //     int N;
            //     int A[N];
            //     scanf("%d", &N);
            //     for (int i = 0; i < N; i++)
            //     {
            //         scanf("%d", &A[i]);
            //     }
            //     for (int i =(N-1); i>= 0 ; i--)
            //     {
            //         printf("%d ",A[i]);
            //     }
            //     return 0;
            // }

//THIS IS MY CODE AND WORKED ABSOLUTELY FINE!!!!!! IM SO HAPPY I DIDNT COPY
        // #include<stdio.h>
        // #include<stdlib.h>
        // int main()
        // {
        //     int N;
        //     int *A;
        //     scanf("%d", &N);    
        //     A = (int*)malloc(N *sizeof(int));

        //     for (int i = 0; i < N; i++)
        //     {
        //         scanf("%d", &A[i]);
        //     }
        //     for (int i =(N-1); i>= 0 ; i--)
        //     {
        //         printf("%d ",A[i]);
        //     }
        //     return 0;
        // }
//hackerrank's given format



//Google's solution
// #include <math.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <assert.h>
// #include <limits.h>
// #include <stdbool.h>

// int main(){
//     int n,m=0; 
//     scanf("%d",&n);
//     int *arr = malloc(sizeof(int) * n);
//     for(int arr_i = 0; arr_i < n; arr_i++){
//        scanf("%d",&arr[arr_i]);
//     }
//     for(int arr_j=n-1;arr_j >=0; arr_j--){
//         printf("%d ", arr[arr_j]);
//     }
//     return 0;
// }
