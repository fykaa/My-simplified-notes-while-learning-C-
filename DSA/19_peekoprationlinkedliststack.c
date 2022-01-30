//PEEK OPERATION ON LINKED LIST STACKS

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
    for (int i = 0; i < peeking_posn-1 && ptr!=NULL ; i++)  //peeking_posn - 1 because peeking postion begins from 1 ,2, 3, whereas pointer index goes like 0,1,2,3... hence running from i= 0 
    {
        ptr = ptr->next;
    }
    //now ptr is at peeking_posn from top          eg. if peeking_posn = 3 that means from element 342,9723,2345,765   -->2345 is 3rd peeking position AND NOT 765 OKAY

    int x = ptr->data;
    if (ptr!=NULL)
    {
        return x;
    }
    else{
        return -1;      //-1 is baat kaa sanket hai ki operation useuccssful raha
    }
    
    
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
    linkedlisttraversal(top);
    printf("peek at position %d will give %d", 3, peek(top, 2));
}