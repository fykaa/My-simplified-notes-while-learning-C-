#include<stdio.h>
//TRANSVERSAL: travelling each element in the array
void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[10]={2,4,5,6};
    display(arr, 4);
    return 0;
}