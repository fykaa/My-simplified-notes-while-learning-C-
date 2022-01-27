#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};
void linkedlisttraversal(struct node *ptr){
    while (ptr!= NULL)
    {
        printf("Element; %d\n", ptr->data);
        ptr = ptr->next;
    }
}


struct node* insertathead(struct node * head, int data){
    struct node* ptr = (struct node*)malloc ( sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
}

struct node* insertatindex(struct node * head, int index, int data){
    struct node *ptr = (struct node*)malloc( sizeof(struct node));
    struct node* p;
    p= head;
    int i = 0;
    while (i<(index-1))
    {
        p = p->next;
        i++;
    }
    ptr->data= data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node* insertatend(struct node* head, int data)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data= data;
    struct node* p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}


struct node* insertafternode(struct node * head, struct node* prevNode , int data){
    struct node* ptr = (struct node* )malloc ( sizeof(struct node));
    ptr->next = prevNode->next;
    ptr->data = data;
    prevNode->next= ptr;
    return head;
}


struct node* deletehead(struct node* head){
    struct node* p = head;
    head = head->next;
    free(p);
    return head;
}

struct node* deleteindex(struct node* head, int index){
    struct node* p = head;
    struct node* q = head->next;
    int i = 0;
    while (i< (index-1))    //matlab if index is 4 then take only 3 steps taaki p exact index se pehle aakr ruke
    {
        p= p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct node* deleteend(struct node* head){
    struct node* p = head;
    struct node* q = p->next;
    while (q->next != NULL)
    {
        p= p->next;
        q = q->next;
    }
    
    p->next= q->next;
    free(q);
    return head;
}

struct node* deletevalue(struct node* head, int value){
    struct node* p = head;
    struct node* q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}


int main()
{
    struct node *head;
    struct node * a;
    struct node * b;
    struct node * c;
    head = (struct node*)malloc (sizeof(struct node));
    a = (struct node*)malloc (sizeof(struct node));
    b= (struct node*)malloc (sizeof(struct node));
    c = (struct node*)malloc (sizeof(struct node));




    head->data = 12;
    a->data = 23;
    b->data= 43;
    c->data = 65;
    c->next = NULL;
    b->next = c;
    a-> next = b;
    head->next = a;

    linkedlisttraversal(head);

    head = insertathead(head, 111111);
    linkedlisttraversal(head);

    head = insertatindex(head, 2, 222222);
    linkedlisttraversal(head);

    head = insertatend(head, 33333333);
    linkedlisttraversal(head);

    head = insertafternode(head, b, 444444);
    linkedlisttraversal(head);

    head = deletehead(head);
    linkedlisttraversal(head);

    head = deleteindex(head, 3);
    linkedlisttraversal(head);

    head = deleteend(head);
    linkedlisttraversal(head);

    head = deletevalue(head, 23);
    linkedlisttraversal(head);


    return 0;
}