// #include<stdio.h>
// void display(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
// //DELETION: deletes an element at index without disturbing the order!
// //arr[10]= {7,8,12,27,88}  deleting at index 2 makes it arr[10]= {7,8,27,88}

// int deletion(int arr[], int capacity, int index, int size){
//     if (index>=capacity)
//     {
//         printf("This is not possible because this index is not present int the array\n");
//         return -1;
//     }
//     for (int i = index; i <size; i++)
//     {
//         arr[i]= arr[i+1];
//     }
// }
// int main()
// {
//     int arr[10]={7,8,12,27,88};
//     int size = 5, capacity= 10, index = 2;
//     printf("-------------BEFORE DELETION-------------\n");
//     display(arr, size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("\nAddress of %d is %d\n",arr[i], &arr[i]);
//     }
//     deletion(arr, capacity,index, size);
//     size-=1;
//     printf("\n-------------AFTER DELETION-------------\n");
//     display(arr, size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("\nAddress of %d is %d\n",arr[i], &arr[i]);
//     }
//     printf("\n");
//     return 0;
// }