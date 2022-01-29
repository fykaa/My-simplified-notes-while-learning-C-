//IMPOSTING TWO WAYS TO CALL A FUNCTION (the problem basically arrived when we were creating pop function for linked list stack)
    //CALL BY REFERRENCE(here you'll have to dereference each variable , address each variable)
    //CALL BY VALUE (here you'll have to use GLOBAL VARIABLE)


//
// #include<stdio.h>
// #include<stdlib.h>

// //We don't need to create a STACK function because STACK consists :
//     //SIZE - but a linkedlist is not limited to size like that of Arrays
//     //TOP -  but in Linked list form of stack , the HEAD is the TOP as every new element inserted is taking constant(O(1)) TIME to be inserted from head side!, hence TOP is included in Linked list datatype
//     //Linked list - vo toh bann gaya

// // Creating Linked list
// struct Node{
//     int data;
//     struct Node * next;
// };

// // Traversal function for LINKED LIST
// void linkedlisttraversal(struct Node *ptr){
//     printf("Elements: ");
//     while (ptr!=NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }

//     printf("\n");
// }

// // Empty check
// int isEmpty(struct Node* top){
//     if (top == NULL)
//     {
//         return 1;
//     }
//     return 0;
// }

// // Full check
// int isFull(struct Node* top){
//     struct Node *n = (struct Node*)malloc(sizeof(struct Node));
//     if (n == NULL)
//     {
//         return 1;
//     }
//     return 0;
// }

// // Push function
// struct Node* push(struct Node* top, int data){            //we ask for top in push because in STACK FORM of linked list ham top (i.e. head) se hi new values add karte hia
//     if (isFull(top))        // HAVE TO WRITE isFull() because this is taking a pointer
//     {
//         printf("Stack Overflowed\n");
//     }
//     else{
//         struct Node* p = (struct Node*)malloc(sizeof(struct Node));
//         p->data = data;
//         p->next = top;
//         return p;
//     }
// }

// // POP function              (this part is a little complicated here is where we are using CALL BY REFERENCE to call the top variable from main function to pop function , for which we are passing address of top variable)
// int pop(struct Node** top){     //pointer of pointer top (as we are passing address of top pointer)
//     if (isEmpty(*top))
//     {
//         printf("Stack Underflows\n");
//     }
//     else{
//         struct Node * n = *top;
//         *top = n->next;  //or = top->next (same things)
//         int x = n->data;
//         free(n);
//         return x;
// }
    
// }
// int main()
// {
//     struct Node* top= NULL;
//     top = push(top, 78);    //WILL HAVE TO write top= because LINKED LIST form of STACK mein ELEMENTS CAN ONLY BE ADDED THROUGH THE TOP i.e. HEAD SIDE of the LINKED LIST
//     top = push(top, 98);
//     top = push(top, 101);
//     top = push(top, 34);

//     linkedlisttraversal(top);
//     printf("POPPED OUT %d from the LINKED LIST STACK\n", pop(&top));      

//     //if im sending top from main function to the void function , it won't be able to change top in the main function   (we studied this in c language (call by value)) because copy of variable is passed not variable 
//         //HENCE we'll pass the address of the variable (pointer top) so that address of pointer top is passed and it can pop from the pointer top
//         //In case of functions isEmpty isFull and Push, we never changed the variable top pointer in these functions , instead we either checked some of the constraints of the copy of this toppointer or we created a new pointer and passed it to main functon
//         // ANOTHER IMPLEMENTATION OF this problem of POP function so you dont have to again and again deference top is :
//             //you make top a GLOBAL variable!!!
//             //i.e. any changes made in top is directly made in it and not in the passed copy! 
//             //this is shown below in this file itself have a look below this

//     linkedlisttraversal(top);
//     pop(&top);
//     linkedlisttraversal(top);
//     return 0;
// }



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
//(this part is a little complicated here is where we are using CALL BY VALUE to call the top variable, WE CAN MAKE CHANGES to the top variable without using its address because now top variable is not limited to MAIN FUNCTION but it has become a GLOBAL VARIABLE

int pop(struct Node* tp){   //we'll HAVE TO CHANGE NAME of this LOCAL VARIABLE as if it has same name as Global Variable the program will be confused while CHANGING  value of a LOCAL variable WITH a GLOBAL variable
                                //i.e. we have to make changed in the GLOBAL variable top
                                // and using local var tp
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
int main()
{
    
    top = push(top, 122);
    top = push(top, 123);
    top = push(top, 134);
    printf("lets pop %d \n", pop(top));
    linkedlisttraversal(top);
}










