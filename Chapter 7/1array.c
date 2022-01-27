/*Chapter 7 - Arrays
An array is a collection of similar elements.(i.e. integers kacollection, floats ka collcn, characters ka collcn)
One variable => Capable of storing multiple values

Syntax,
The syntax of declaring an array looks like this:

int marks[90];                    => integer array
char name[20];                    => character array or string
float percentile[90];             => float array

The values can now be assigned to marks array like this:
marks[0]=33;
marks[1]=12;

Note: It is very important to note that the array index starts with 0.
@ in c lang specially


Marks-7,6,21,3,91,3..........34,37
      0,1,2 ,3, 4,5..........88,89======Total 90 ELEMENTS  (89 not means that 89 elements h , zero se start horaha h isliye 90 elemtns hai )*/


//PROOF;
#include<stdio.h>

int main()
{
      //NAIVE way to create 4 ints;
      // int marks1, marks2, marks3, marks4;
      // marks1= 33;
      // marks2= 23;
      // marks3= 65;
      // marks4= 56;
      //Clever way to story 4 ints using arrays;
      int marks[4];
      marks[0]= 33;
      marks[1]= 23;
      marks[2]= 65;
      marks[3]= 56; 
      return 0; 
}