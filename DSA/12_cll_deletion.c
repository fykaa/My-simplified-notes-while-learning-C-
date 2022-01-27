//THIS CODING FOR DELETION AT HEAD IS TOTALLY BY ME !!! HURRAYYYYYY!!! SO NOW I CAN BUILD AMAZING LOGICS ALL BY MYSLEF!!!!!


#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void cllTraversal(struct Node* head){
    struct Node* ptr = head;
    do
    {
        printf("Element: %d\n", ptr->data);
        ptr= ptr->next;

    } while (ptr!= head);
}

struct Node* deleteAthead(struct Node* head){
    struct Node* p = head;
    struct Node* q = head->next;
    while (q->next != head)
    {
        q= q->next;
    }
    //At this point q points at last node of the circular linked list
    q->next = p->next;
    head = p->next;
    free(p);
    return head;
}



int main()
{
    struct Node* head;
    struct Node* a;
    struct Node* b;
    struct Node* c;
    head = (struct Node*)malloc(sizeof(struct Node));
    a = (struct Node*)malloc(sizeof(struct Node));
    b = (struct Node*)malloc(sizeof(struct Node));
    c = (struct Node*)malloc(sizeof(struct Node));
    head->data = 11;
    a->data = 21;
    b->data = 31;
    c->data = 41;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = head;

    cllTraversal(head);
    head = deleteAthead(head);
    printf("After Deletion at head\n");
    cllTraversal(head);
    return 0;
}