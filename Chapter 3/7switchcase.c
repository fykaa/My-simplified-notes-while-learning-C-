// Switch case-control instruction

      //Switch-case is used when we have to make a choice between the number of alternatives for a given variable.

                  // Syntax:

                  // Switch(integer-expression)

                  // {

                  // Case c1:

                  //       Code;

                  // Case c2:                                                         //c1,c2,c3 are constants

                  //       Code;                                                       //Code is any valid C code

                  // Case c3:

                  //       Code;

                  // default:

                  //       Code;

                  // }


// The value of integer-expression is matched against c1,c2,c3......if it matched any of these cases, that case along with all subsequent “case” and “default” statements are executed.



#include<stdio.h>

int main()
{
      int rating;
      printf("enter your rating from (1-5)\n");
      scanf("%d", &rating);
      switch(rating){
            case 1:
                  printf("rating is one\n");
                  break;
            case 2:
                  printf("rating is two\n");
                                                            //IF YOU NOT USE BREAK it will runn the preceding program too
            case 3:
                  printf("rating is three\n");
                  break;
            case 5:
                  printf("rating is four\n");
                  break;
            case 4:
                  printf("rating is five\n");
                  break;
            default:
                  printf("Invalid Rating!\n");
      }
      return 0; 

}


// Important notes

// We can use switch case statements even by writing in any order of our choice
// Char values are allowed as they can be easily evaluated to an integer
// A switch can occur within another, but in practice, this is rarely done MN./