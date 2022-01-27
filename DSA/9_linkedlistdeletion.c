#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node *ptr){
    while (ptr!= NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node* deleteFirst(struct Node* head){
    struct Node* ptr= head;
    head = head->next;
    free(ptr);
    return head;
}
//CASE 2 (DELETION AT INDEX BY ME)
            // struct Node* deleteAtIndex(struct Node *head, int index){
            //     struct Node* p = head;
            //     int i = 0;
            //     while (i < (index-1))
            //     {
            //         p = p->next;
            //         i++;
            //     }
            //     struct Node* q = p->next;
            //     p->next = q->next;
            //     free(q);
            //     return head;
            // }
//another way againn by me 
            // struct node* deleteindex(struct node* head, int index){
            //     struct node* p = head;
            //     struct node* q = head->next;
            //     int i = 0;
            //     while (i< (index-1))    //matlab if index is 4 then take only 3 steps taaki p exact index se pehle aakr ruke
            //     {
            //         p= p->next;
            //         q = q->next;
            //         i++;
            //     }
            //     p->next = q->next;
            //     free(q);
            //     return head;
            // }
//CASE 2 (DELETION AT INDEX)
struct Node* deleteAtIndex(struct Node* head, int index){
    struct Node* p = head;
    struct Node* q = head->next;
    for (int i = 0; i < index-1; i++)       //matlab if index is 4 then take only 3 steps taaki p exact index se pehle aakr ruke
    {
        p = p->next;
        q = q->next;
    }
    //now p is at (index-1) & q is at index
    p->next = q->next;
    free(q);
    return head;
}
    
//CASE 3 (DELETION AT LAST)
struct Node* deleteLast(struct Node*head){
    struct Node* p = head;
    struct Node* q = head->next;
    while (q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }

    //p is at second last element & q is at last element
    
    p->next = q->next; //or p->next = NULL;
    free(q);
    return head;
}

//CASE 4 (DELETING VALUE)
struct Node* deleteValue(struct Node* head, int value){
    struct Node* p = head;
    struct Node* q = head->next;
    while (q->data != value && q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data==value)
    {
        p->next = q->next;
        free(q); 
    }
    return head;
}

int main()
{
    struct Node* head;
    struct Node* sec;
    struct Node* thir;
    struct Node* four;
    struct Node* five;
    struct Node* six;
    struct Node* seven;

    head = (struct Node*)malloc(sizeof(struct Node));
    sec  = (struct Node*)malloc(sizeof(struct Node));
    thir = (struct Node*)malloc(sizeof(struct Node));
    four = (struct Node*)malloc(sizeof(struct Node));
    five = (struct Node*)malloc(sizeof(struct Node));
    six  = (struct Node*)malloc(sizeof(struct Node));
    seven= (struct Node*)malloc(sizeof(struct Node));

    head->data = 12;
    sec->data  = 24;
    thir->data = 42;
    four->data = 54;
    five->data = 68;
    six->data = 76;
    seven->data = 89;

    head->next = sec;
    sec->next  = thir;
    thir->next = four;
    four->next = five;
    five->next = six;
    six->next = seven;
    seven->next = NULL;

    printf("BEFORE DELETION\n");
    linkedListTraversal(head);

    head = deleteFirst(head);
    printf("CASE 1 AFTER DELETION at FIRST\n");
    linkedListTraversal(head);

    head = deleteAtIndex(head, 3);
    printf("CASE 2 AFTER DELETION at INDEX\n");
    linkedListTraversal(head);

    head = deleteLast(head);
    printf("CASE 3 AFTER DELETION at LAST\n");
    linkedListTraversal(head);
    
    head = deleteValue(head, 54);
    printf("CASE 4 AFTER DELETING VALUE\n");
    linkedListTraversal(head);

    return 0;
}