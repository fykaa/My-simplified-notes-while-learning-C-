#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;   //size of the array (i.e. number of elements that can be inserted in this STACK ARRAY)
    int top;    //top = index of last element entered (i.e. number of elements present in this array)
    int *arr;   //ye integer pointer h , jiski madat se ham dynamically memory allocate karege
};

int isEmpty(struct Stack *ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct Stack *ptr){
    if (ptr->top == (ptr->size - 1))
    {
        return 1;
    }
    return 0;   
}

// PUSH OPERATION:
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


// POP OPERATION:
// int pop(struct Stack* ptr){
//     if (isEmpty(ptr))
//     {
//         printf("Stack Underflow! Cannot pop from the stack\n");
//         return -1;
//     }
//     else{
//         int val = ptr->arr[ptr->top];   //storing the top most value !!!
//         ptr->top = ptr->top -1;
//         // ptr->top--;
//         return val;
//     }
// }



int pop(struct Stack *ptr){
    if (ptr->top == -1)
    {
        printf("Stack underflow ");
    }
    else{
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    } 
}

int main()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int*)malloc(s->size*sizeof(int));

    printf("Before Pushing, FULL: %d\n", isFull(s));  //if full then 1, else 0
    printf("Before Pushing, EMPTY: %d\n", isEmpty(s)); //if empty then 1, else 0
    push(s, 56);    //bottom element
    push(s, 566);
    push(s, 57);
    push(s, 58);
    push(s, 59);
    push(s, 22);
    push(s, 42);
    push(s, 63);
    push(s, 45);
    push(s, 89);    //top element
                    //---> pushed 10(size of array) values already

    push(s, 6);     //---> hence 11th array is overflowing hence function printed "Stack Overflow! Cannot push 6 to the stack"

    printf("\n");

    printf("After Pushing FULL: %d\n", isFull(s));  
    printf("After Pushing EMPTY: %d\n", isEmpty(s));

    printf("Popped %d from the stack ", pop(s));  //here you see LAST element popping out first i.e. LIFO = last in first out
    printf("Hence %d is NOW the topmost element", s->arr[s->top]);
    return 0;
}