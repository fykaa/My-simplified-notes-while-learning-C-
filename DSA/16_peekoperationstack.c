// /*peek operation on stacks
// We can find value at a given point i in the array
// here!
// i is starting from the top AND NOT FROM THE bottom of Stack 

//     hence don't confuse that if i=3 it means element at index 3. HELL NO
//     element at index 3 is taken from bottom of stack that too starting from 0
//     whereas int i wants to peek frm the top of stack that too starting from 1


//    i                    Arr(index) = top - i + 1
// (peeking position)       
//         1                   4 = 4-1+1              
//         2                   3 = 4-2+1
//         3                   2 = 4-3+1
//         4                   1 = 4-4+1
//         5                   0 = 4-5+1
//                            -1 = 4-6+1   //this will be invalid postion for index i to peek at     


// INDEX of ARRAY = INDEX OF TOP - PEEKING POSITION + 1;
// arr(index) = top -i + 1;
// */


#include<stdio.h>
#include <stdlib.h>
struct Stack{
    int size;
    int top;
    int *arr;
};
int isFull(struct Stack *ptr){
    if (ptr->top == (ptr->size - 1))
    {
        return 1;
    }
    return 0;   
}
void push(struct Stack *ptr ,int value){
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", value);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]= value;
    }
}

int peek(struct Stack *ptr, int i){
    int arrayIndex = ptr->top -i+1;
    if (arrayIndex <0)      //to check if this peeking position is not at an index of the array that doesn't exists i.e. index below 0
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return ptr->arr[arrayIndex];
    }
    
}

int main()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(s->size*sizeof(int));

    push(s, 56);
    push(s, 566);
    push(s, 57);
    push(s, 58);
    push(s, 59);
    push(s, 22);
    push(s, 42);
    push(s, 63);
    push(s, 45);
    push(s, 89); 
    
    for (int i = 1; i <= s->top+1 ; i++)
    {
        printf("the value at | peeking position %d | or | index %d of the array | is %d\n", i, (10-i),  peek(s, i));
    }
    
    return 0;
}




//practicing again

// #include<stdio.h>
// #include<stdlib.h>

// struct Stack {
//     int size;
//     int top;
//     int* arr ;
// };

// int ifFull(struct Stack *ptr){
//     if (ptr->top == ptr->size-1)
//     {
//         return 1;
//     }
//     return 0;
// }

// void push(struct Stack *s, int value){
//     if (ifFull(s))
//     {
//         printf("overflow %d\n", value);
//     }
//     else{
//         s->top++;
//         s->arr[s->top]= value;
//     }
// }

// int peek(struct Stack *s, int peeking_position){
//     int arr_index = s->top +1 - peeking_position;
//     if (arr_index<0)
//     {
//         printf("galat %d", peeking_position);
//     }
//     else{
//         return s->arr[arr_index];
//     }
// }

// int main()
// {
//     struct Stack *s= (struct Stack *)malloc(sizeof(struct Stack));
//     s->size=5;
//     s->top = -1;
//     s->arr= (int*)malloc(s->size *sizeof(int));
//     push(s, 12);
//     push(s, 21);
//     push(s,43);
//     push(s,53);
//     push(s,23);

//     push(s,97);

//     for (int i = 1; i < s->size+1; i++)
//     {
//         printf("The element at array index %d & at peeking position %d is %d\n", (5-i), i, peek(s, i));
//     }
    
//     return 0;
// }