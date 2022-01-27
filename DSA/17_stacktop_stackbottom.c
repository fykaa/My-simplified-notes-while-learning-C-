#include<stdio.h>
#include<stdlib.h>

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
int stacktop(struct Stack *ptr){
    return ptr->arr[ptr->top];
}
int stackbottom(struct Stack *ptr){
    return ptr->arr[0];
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
    printf("The topmost element is %d\n", stacktop(s));
    printf("The bottom element is %d", stackbottom(s));
    return 0;
}









