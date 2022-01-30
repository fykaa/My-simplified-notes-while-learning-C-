#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;   
    int top;    
    char *arr;  
};

int isEmpty(struct Stack *ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Stack *ptr){
    if (ptr->top == (ptr->size - 1))
    {
        return 1;
    }
    return 0;   
}

void push(struct Stack *ptr ,char value){
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %c to the stack\n", value);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]= value;
    }
}

char pop(struct Stack *ptr){
    if (ptr->top == -1)
    {
        printf("Stack underflow ");
    }
    else{
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    } 
}

int parenthesisMatch(char * expression){
    struct Stack* sp;
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size*sizeof(char));
    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (expression[i] == '(')
        {
            push(sp, expression[i]);
        }
        else if(expression[i]== ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char * exp = "8*(9(6(3(4)))7)";
    if (parenthesisMatch(exp))
    {
        printf("Parenthesis Matching\n");
    }
    else{
        printf("Parenthesis NOT matching\n");
    }
    return 0;
}

//THIS FUNCTION is not giving the validity of the expression,, it's just telling if the parenthesis is Balanced or not nothing else!.
    