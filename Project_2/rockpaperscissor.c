#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int RockPaperScissor(char your, char comp){
    //For DRAW
    if (your == comp)
    {
        printf("This is a draw\n");
    }
    /*For NON DRAW:
    pr - win
    rp - loose
    
    rs - win
    sr - loose

    sp - win
    ps - loose
    

    */
    if (your == 'p' && comp == 'r')
    {
        printf("You win\n");
    }
    else if (your == 'r' && comp == 'p')
    {
        printf("You loose\n");
    }
    if (your == 'r' && comp == 's')
    {
        printf("You win\n");
    }
    else if (your == 's' && comp == 'r')
    {
        printf("You loose\n");
    }
    if (your == 's' && comp == 'p')
    {
        printf("You win\n");
    }
    else if (your == 'p' && comp == 's')
    {
        printf("You loose\n");
    }
    if (your != 'r' || your != 'p' || your != 's')
    {
        printf("ENTER VALID CHARACTER BETWEEN 'r'\t'p'\t's'\t\n");
    } 
}
int main(){
    char your, comp;
    srand(time(0));
    int number = rand()%100 + 1;
    // printf("%d", number);
    if (number<33)
    {
        comp = 'r';
    }
    else if (number>33 && number <66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }
    
    printf("Enter\t'r' for ROCK\t'p' for PAPER\t's' for SCISSOR\n");
    scanf("%c", &your);
    int result = RockPaperScissor(your, comp);
    printf("You chose %c and computer chose %c\n", your, comp);
    return 0;
}