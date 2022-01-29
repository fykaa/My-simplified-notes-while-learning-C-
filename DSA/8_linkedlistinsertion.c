#include<stdio.h>
#include<stdlib.h>

//LINKED LIST IS A DATATYPE THAT CONTAINS A INTEGER , AND A POINTER, SOO TO CREATE SUCH A DATATYPE WE USE STRUCTURES
// THIS IS STRUTURE FOR LINKED LIST

struct Node{
    int data;
    struct Node* next;  //just like integer ka address store krne k liye we use int* similarly structure ka address store karne ke liye we'll use structure pointer
};

void linkedListTraversal(struct Node *ptr){     //This function is printing each element of the Linked List
    while (ptr!= NULL)    //here ptr is a pointer, so acc. to condition inside while loop jabtak ptr NULL ko point naa kare tabtak ye while loop chalega
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// INSERT AT HEAD   THIS IS FUNCTION (NOT STRUCTURE!)
struct Node* insertAtFirst(struct Node* head, int data)     //this is a function just like void int, this is struct node function!!
{
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));       //head , second , third, fourth ko ham already heap mein memory allocate kar chuke hai, abb jo naya ptr linked list mein add karna hai use bhi to heap mein meomory allocate karna hoga!!
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// INSERT AT INDEX      THIS IS FUNCTION (NOT STRUCTURE!)
struct Node* insertAtIndex(struct Node* head, int data, int index){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    while (i!= index-1 /* or i<index-1 */)      //so if this loop runs only till (index-1) ; toh isse  (index-1) wala element p banayega and (index) wale element  ko point karne lage ga!
    {
        p = p->next;    
        i++;
    }
    //now p is at (index-1)
    //so abb p can point to ptr and ptr can point to index wala elemet thereby adding ptr before index!
    ptr->data= data;
    ptr->next= p->next;
    p->next = ptr;
    return head;
}

// INSERT IN THE END    THIS IS FUNCTION (NOT STRUCTURE!)
struct Node* insertInEnd(struct Node* head, int data){
    struct Node* ptr = (struct Node*) malloc( sizeof(struct Node));
    struct Node* p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    
    p->next = ptr;
    ptr->next= NULL;  
    return head;  
}

// INSERT AFTER NODE    THIS IS FUNCTION (NOT STRUCTURE!)
struct Node* insertAfterNode(struct Node* head, struct Node* prevNode, int data){
    struct Node* ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}






int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

//Allocate memory for nodes in the linked list in heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*) malloc (sizeof(struct Node));
    third = (struct Node*)malloc (sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
//storing data and linking
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next= third;
    third->data = 21;
    third->next = fourth;
    fourth->data = 66;
    fourth->next = NULL;
    
    printf("\nBefore Inserting At FIRST\n");
    linkedListTraversal(head);

    head = insertAtFirst(head, 59);
    printf("\nAfter Inserting At FIRST\n");
    linkedListTraversal(head);

    head = insertAtIndex(head, 67, 3);
    printf("\nAfter Inserting At INDEX\n");
    linkedListTraversal(head);
    
    head = insertInEnd(head, 77);
    printf("\nAfter Inserting At END\n");
    linkedListTraversal(head);

    head = insertAfterNode(head, second, 87);
    printf("\nInserting after NODE\n");
    linkedListTraversal(head);

    return 0; 
}
