//VERY IMPORTANT

#include<stdio.h>
int binarysearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size - 1;
    
    while (low<=high)
    {
        mid = (low+high)/2;
        if (arr[mid]==element)
        {
            return mid;
        }
        if (arr[mid]<element)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;      //worst case , jab poore array meinn na mile, i.e. O(logn)
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,34,38,39,47,57,76,96,99};
    int size = sizeof(arr)/sizeof(int);
    int element = 2, index;
    // printf("The size of array is %d", size);
    index = binarysearch(arr, size, element);
    printf("element %d is at index %d", element, index);
    return 0;
}