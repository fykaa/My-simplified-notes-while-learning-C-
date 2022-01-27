// Every function gets called directly or indirectly from main()

#include<stdio.h>
void gm();
void gn();
void ga();
int main()
{
    int a;
    printf("INITIALLY\n");
    //function call
    gm();
    return 0; 
}

void gm(){
    printf("Good morning\n");
    ga();           //so here the function gm is calling ga
}
void ga(){
    printf("GOOD AFTERNOON\n");
    gn();           //SO HERE ga is calling gn
}

void gn(){
    printf("GOOD NIGHT");
}