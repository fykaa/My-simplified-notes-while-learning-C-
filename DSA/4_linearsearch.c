#include<stdio.h>
int linearsearch(int arr[], int element, int size){
    for (int i = 0; i <=size; i++)  //so here this is Linear search AS VALUE OF i is increasing linearly from 0 to size hence checking each element one after other!!!
    {
        if (arr[i]==element)
        {
            return i;
        }
    }
    return -1;       //worst case , jab poore array meinn na mile, i.e. O(n)
}
int main()
{
    int arr[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    int size = sizeof(arr)/sizeof(int);
    int element, capacity = 100, index ;
    printf("You want to find element?\n");
    scanf("%d", &element);
    index =  linearsearch(arr, element, size);
    printf("Element %d is at index %d\n", element, index);
    return 0;
}