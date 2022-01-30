//Finding stack top and stack bottom LINKED LIST STACKS

#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

struct Node * top = NULL;       //SO WE'VE MADE top A GLOBAL VARIABLE!!!

void linkedlisttraversal(struct Node * ptr){
    while (ptr!= NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

int isEmpty(struct Node *top){
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Node *top){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return 1;
    }
    return 0;
    
}

struct Node* push(struct Node* top, int data){
    if (isFull(top))
    {
        printf("Overflow\n");
    }
    else{
        struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->data = data;
        ptr->next = top;
        top = ptr;
        return top;
    }
    
}

int pop(struct Node* tp){
    if (isEmpty(tp))
    {
        printf("underflow\n");
    }
    else{
        struct Node *n = tp;
        top = tp->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek(struct Node * top, int peeking_posn){
    struct Node * ptr = top;
    for (int i = 0; i < peeking_posn-1 && ptr!=NULL ; i++)  
    {
        ptr = ptr->next;
    }

    int x = ptr->data;
    if (ptr!=NULL)
    {
        return x;
    }
    else{
        return -1;      
    }
}

int stackTop(struct Node * top){
    return top->data;
}

int stackBottom(struct Node * top){
    struct Node *ptr = (struct Node*)malloc(sizeof(stackBottom));
    ptr = top;
    while (ptr->next!= NULL)
    {
        ptr = ptr->next;
    }
    //here ptr is pointing at last element 
    int c = ptr->data;
    return c;
}

int main()
{
    
    top = push(top, 496);
    top = push(top, 123);
    top = push(top, 134);
    top = push(top, 6748);
    top = push(top, 785);
    top = push(top, 934);
    top = push(top, 345);
    printf("lets pop %d \n", pop(top));
    printf("peek at position %d will give %d\n", 3, peek(top, 2));
    printf("stacktop is %d\n", stackTop(top));
    printf("stackBottom is %d\n", stackBottom(top));

    printf("\n\n");
    for (int i = 1; i < 8; i++)
    {
        printf("Value at position %d is %d\n", i, peek(top, i));
    }
    
}