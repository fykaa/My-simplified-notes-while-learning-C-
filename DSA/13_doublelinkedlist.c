/*
DOUBLE LINKED LIST
both first and last element points to null at one side!!!

NULL<--HEAD--><--NODE1--><--NODE2--><--NODE3--><--NODE4-->NULL
(also notice that NULL doesnt have any previous or next pointers, i.e. you can't go from Null to anywhere)
(prev_node_pointer)(data)(next_node_pointer);
*/

//CODE BY ME
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void doubleLinkedListTraversal(struct Node *ptr){
    struct Node *p = ptr;
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    //here ptr is pointing at NULL
    while (p->next !=NULL)
    {
        p = p->next;
    }
    //at this point p is pointing at last element and Not at null!
    while (p != NULL)
    {
        printf("Element: %d\n", p->data);
        p = p->prev;
    }
}




int main()
{
    struct Node *head;
    struct Node *n1;
    struct Node *n2;
    struct Node *n3;

    head = (struct Node*)malloc(sizeof(struct Node));
    n1 = (struct Node*)malloc(sizeof(struct Node));    
    n2 = (struct Node*)malloc(sizeof(struct Node));    
    n3 = (struct Node*)malloc(sizeof(struct Node));    

    head->data = 11;
    n1->data = 21;
    n2->data = 31;
    n3->data = 41;

    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    head->prev =NULL;
    n1->prev = head;
    n2->prev = n1;
    n3->prev = n2;

    doubleLinkedListTraversal(head);
    return 0;
}





//CODE BY ME
    //IN THIS CODE I CONSIDERED THAT HEAD element SE PEHLE KOI NULL NAHI HAI!
    // i.e.    head--><--NODE1--><--NODE2-->NULL
// #include<stdio.h>
// #include<stdlib.h>

// struct Node {
//     int data;
//     struct Node* prev;
//     struct Node* next;
// };

// void doubleLinkedListTraversal(struct Node *ptr){
//     struct Node * p = ptr;
//     struct Node * q = ptr;
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next;
//     }
//     //at this point ptr is pointing at NULL
//     while (p->next !=NULL)
//     {
//         p = p->next;
//     }
//     //at this point p is pointing at last element and Not at null!
//     printf("IN REVERSE ORDER NOW\n");
//     while (p !=q->prev)
//     {
//         printf("Element: %d\n", p->data);
//         p= p->prev;
//     }
// }

// int main()
// {
//     struct Node *head;
//     struct Node *n1;
//     struct Node *n2;
//     struct Node *n3;

//     head = (struct Node*)malloc(sizeof(struct Node));
//     n1 = (struct Node*)malloc(sizeof(struct Node));    
//     n2 = (struct Node*)malloc(sizeof(struct Node));    
//     n3 = (struct Node*)malloc(sizeof(struct Node));    

//     head->data = 11;
//     n1->data = 21;
//     n2->data = 31;
//     n3->data = 41;

//     head->next = n1;
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = NULL;

//     n1->prev = head;
//     n2->prev = n1;
//     n3->prev = n2;

//     doubleLinkedListTraversal(head);
//     return 0;
// }


