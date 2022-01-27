
#include<stdio.h>
#include<stdlib.h>
//CREATING A CIRCULAR LINKED LIST
struct Node{
    int data;
    struct Node* next;
};


// //TRAVERSING CIRCULAR LOOP: WAY 1 - using while loop
// void circularLinkedListTraversal(struct Node* head){
//     struct Node * p = head;
//     while (p->next !=head)
//     {
//         printf("Element: %d\n", p->data);
//         p= p->next;
//     }
//     printf("Element: %d\n", p->data);
// }

// //TRAVERSING CIRCULAR LOOP: WAY 2 - using while loop
// void circularLinkedListTraversal(struct Node* head){
//     struct Node * p = head;
//     printf("Element: %d\n", p->data);
//     p= p->next;
//     while (p !=head)
//     {
//         printf("Element: %d\n", p->data);
//         p= p->next;
//     }
// }


// //TRAVERSING CIRCULAR LOOP: WAY 3 (best) - using do while loop
void circularLinkedListTraversal(struct Node* head){
    struct Node * p = head;
    do
    {
        printf("Element: %d\n", p->data);
        p= p->next;

    } while (p!= head);
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
    c->next = head;     //FOR CREATING A CIRCULAR LINKED LIST , we avoid pointing last element to NULL


    circularLinkedListTraversal(head);

    return 0;
}