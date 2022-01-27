/*
Structures in memory

Structures are stored in contiguous memory locations for the structures e1 of type struct employee, memory layout looks like this:
        integer   float     character
           100     71.22     "Harry"
ADDRESS   78810    78814       78818

In an array of structures, these employee instances are stored adjacent to each other.
*/
#include<stdio.h>
#include<string.h>
struct student{
        int rollnumber;
        char name;
        float percentage;
};
int main()
{
        struct student s1,s2,s3;
        s1.percentage = 99.2;
        s1.rollnumber = 23;
        
        s2.percentage = 39.2;
        s2.rollnumber = 21;
        
        s3.percentage = 59.2;
        s3.rollnumber = 26;
        printf("The address of students name %d is %u\n", s3.rollnumber, &s3.rollnumber);
        printf("The address of students name %f is %u\n", s3.percentage, &s3.percentage);
        printf("The address of students name %d is %u\n", s2.rollnumber, &s2.rollnumber);
        printf("The address of students name %f is %u\n", s2.percentage, &s2.percentage);
        printf("The address of students name %d is %u\n", s1.rollnumber, &s1.rollnumber);
        printf("The address of students name %f is %u\n", s1.percentage, &s1.percentage);
        return 0; 
}

/*
this is how its saving in memories
address- int/float no..
6422188 - i3
6422196 - f3
6422200 - i2 
6422204 - 
6422208 - f2
6422212 - i1
6422214 - 
6422220 - f1*/