#include<stdio.h>
#include<stdlib.h>

//creating linked list:
struct Node{
    int data;
    struct Node* next;
};
    //function for traversing linked list
    void linkedListTraversal(struct Node *ptr){
    while (ptr!= NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    }

//creating stack
struct Stack{
    int size;
    int top;
    struct Node* linkedlist;
};
    //function isFull
    int isFull(struct Stack *ptr){
        if (ptr->top == (ptr->size - 1))
        {
            return 1;
        }
        return 0;
    }
    //function isEmpty
    int isEmpty(struct Stack *ptr){
        if (ptr->top ==-1)
        {
            return 1;
        }
        return 0;
    }


int main(){
    struct Node *head;
    struct Node *n1;
    struct Node *n2;
    struct Node *n3;
    head = (struct Node*)malloc(sizeof(struct Node));
    n1= (struct Node*)malloc(sizeof(struct Node));
    n2= (struct Node*)malloc(sizeof(struct Node));
    n3= (struct Node*)malloc(sizeof(struct Node));
    head->data = 11;
    n1->data = 21;
    n2->data = 31;
    n3->data = 41;
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    linkedListTraversal(head);

    struct Stack *s;
    s->size = 5;
    s->top = head->data;
    s->linkedlist = (struct Node*)malloc(s->size*sizeof(struct Stack));

    printf("Empty Stack : %d", isEmpty(s));


    return 0;
}




//TARGET: 30, 15,18,20,20,26,16,28,