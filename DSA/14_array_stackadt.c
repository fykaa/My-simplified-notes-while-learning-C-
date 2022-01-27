//ADT (hidden details)  = SET OF VALUES+ SET OF OPERATIONS

//-- MEMORY LAYOUT--> CODE+ INITIALISED/UNITIALISED DATA + STACK + HEAP



// STACK ADT
    //-Stack as Array           (folder mein file 14 to 17)
    //-Stack as Linked List     (file 18 se dekh)

//CODING STACK IN ARRAY


#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int size;   //No. of elements Array can have
    int top;    //Index of Last(topmost) element in the Array
    int* arr;   //Int* because we're gona request this array in heap
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
int main()
{
    // struct Stack *s;    //with NOT using *s 
    // s.size = 6;
    // s.top = -1;
    // s.arr = (int*)malloc(s.size*sizeof(int));  

    struct Stack *s;    //Using *s helps us to do CALL BY REFERENCE and pass this pointer to a function!
    s->size = 6;
    s->top = -1;
    s->arr = (int*)malloc(s->size*sizeof(int));
    
    if (isEmpty(s))
    {
        printf("Empty Stack\n");
    }
    else{
        printf("Stack Not Empty\n");
    }
    if (isFull(s))
    {
        printf("Stack FULL\n");
    }
    else{
        printf("Stack not full\n");
    }
    return 0;
}