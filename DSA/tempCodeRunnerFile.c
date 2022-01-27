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