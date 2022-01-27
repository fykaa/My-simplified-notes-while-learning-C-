// Chapter 9- Practice Set


//(1) . Create a two-dimensional vector using structures in C.
//Answer:
            // #include<stdio.h>
            // struct vector
            // {
            //     int x;
            //     int y;
            // };
            // int main()
            // {
            //     struct vector v1, v2;
            //     v1.x = 34;
            //     v1.y = 32;
            //     printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

            //     v2.x = 54;
            //     v2.y = 33;
            //     printf("X dim is %d and Y dim is %d\n", v2.x , v2.y);
            //     return 0; 
            // }

    //another same answer;
            // #include<stdio.h>
            // struct vector{
            //     int x;
            //     int y;
            // };
            // int main()
            // {
            //     struct vector v1={34, 56};
            //     struct vector v2={43,22};
            //     printf("X dim of v1 is %d and Y dim of v1 is %d\n", v1.x, v1.y);
            //     printf("X dim of v2 is %d and Y dim of v2 is %d", v2.x, v2.y);
            //     return 0;
            // }

//(2) . Write a function SumVector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.
//Answer:
//byme ABSOLUTELY CORRECT
            // #include<stdio.h>
            // typedef struct vector{
            //     int x;
            //     int y;
            // }vec ; 
            // void SumVector(vec v1, vec v2){
            //     int xd;
            //     xd = v1.x + v2.x;
            //     int yd;
            //     yd = v1.y + v2.y;
            //     printf("The sum of v1 and v2 is %di + %dj",xd, yd);
            // }
            // int main()
            // {
            //     vec v1, v2;
            //     v1.x = 23;
            //     v2.x = 43;
            //     v1.y = 34;
            //     v2.y = 89;
            //     SumVector(v1, v2);
            //     return 0;
            // }

//(3) . Twenty integers are to be stored in memory. What will you prefer- Array or Structure?
//Answer:
//Here similar datatype has to be stored hence it's better to use arrays, as structures is defined for dissimilar datatype.


//(4) . Write a program to illustrate the use of an arrow operator -> in C.
//Answer:

            // #include<stdio.h>
            // typedef struct employee
            // {
            //     int code;
            //     char name;
            // }str;
            // int main()
            // {
            //     str e1, e2;
            //     str *ptr;
            //     str *ptrr;
            //     ptr = &e1;
            //     ptrr = &e2;
            //     (*ptr).code = 101;  //another way to write this is "e1.code = 101;"
            //     ptrr->code = 1432;
            //     printf("%d\n", e1.code);
            //     printf("%d", e2.code);
            //     return 0; 
            // }

//(5) . Write a program with a structure representing a Complex number.
//Answer:
//complex no. = a + bi;
//by me
            // #include<stdio.h>
            // typedef struct complex_no
            // {
            //     float real;
            //     float img;
            // } cn;

            // void complex(cn c1){
            //     printf("The complex no. is %.1f + %.1fi\n", c1.real, c1.img);
            // }
            // int main()
            // {
            //     cn c1;
            //     c1.real = 45.1;
            //     c1.img = 3;
            //     complex(c1);
            //     return 0;
            // }

//(6) . Create an array of 5 complex numbers created in problem 5 and display them with the help of a display function.The values must be taken as an input from the user.
//Answer:
//by me (totally well)




            // #include<stdio.h>
            // typedef struct complex_no
            // {
            //     float real;
            //     int imaginary;
            // }cn;

            // void complex(cn c[5]){
            //     for (int i = 0; i < 5; i++)
            //     {
            //         printf("Complex no. %d is %.1f + %di\n", (i+1), c[i].real, c[i].imaginary);
            //     }
            // }
            // int main()
            // {
            //     cn c[5];
            //     for (int i = 0; i < 5; i++)
            //     {
                        // printf("Real value of c[%d]\n", (i+1));
                        // scanf("%f", &c[i].real);
                        // printf("Imaginary value of c[%d]\n", (i+1));
                        // scanf("%d", &c[i].imaginary);
            //     }
            //     complex(c);
            //     return 0;
            // }
//by sir
            // #include<stdio.h>

            // typedef struct complex{
            //     int real;
            //     int complex;
            // }comp;

            // void display(comp c){
            //     printf("The value of real part is %d\n", c.real);
            //     printf("The value of Imaginary part is %d\n", c.complex);
            // }

            // int main(){
            //     comp cnums[5];
            //     for(int i=0; i<5; i++){
            //         printf("Enter the real value for %d num\n", i+1);
            //         scanf("%d", &cnums[i].real);

            //         printf("Enter the complex value for %d num\n", i+1);
            //         scanf("%d", &cnums[i].complex);
            //     }
            //     for(int i=0; i<5; i++){
            //         display(cnums[i]);
            //     }
            //     return 0;
            // }

//(7) . Write problem 5’s structure using typedef keyword.
//Answer:
//already done there only lmao


//(8) . Create a structure representing a bank account of a customer. What fields did you use and why?
//Answer:
//BY ME;
            // #include<stdio.h>
            // #include<string.h>
            // typedef struct bank_acc
            // {
            //     int balance;
            //     char name[50];
            //     int acc_number; 
            // }bac;
            // void display(bac ba[2])
            // {
            //     for (int i = 0; i < 2; i++)
            //     {
            //         printf("The balance of account number %d and name %s is   %d \n", ba[i].acc_number, ba[i].name, ba[i].balance );
            //     }
            // }
            // int main()
            // {
            //     struct bank_acc ba[2];
            //     for (int i = 0; i < 2; i++)
            //     {
            //         fflush(stdin);
            //         printf("Enter account number of %d\n", (i+1));
            //         scanf("%d", &ba[i].acc_number);
            //         printf("Enter name of %d\n", (i+1));
            //         scanf("%s", &ba[i].name);
            //         printf("Enter balance of %d\n", (i+1));
            //         scanf("%d", &ba[i].balance);
            //     }
            //     display(ba);
            //     return 0;
            // }


//(9) . Write a structure capable of storing date. Write a function to compare those dates.
//Answer:

//by me: (AMAZING)
                // #include<stdio.h>
                // typedef struct date{
                //     int year;
                //     int month;
                //     int date;
                // }date;
                // void displayDate(date d){
                //     printf("Date is %d/%d/%d\n", d.date, d.month, d.year);
                // }
                // void cmpDate(date d1, date d2){
                //     if (d1.year>d2.year)
                //     {
                //         printf("Date 2 is earlier\n");
                //     }
                //     else if (d1.year<d2.year)
                //     {
                //         printf("Date 1 is earlier\n");
                //     }
                //     else if (d1.month>d2.month)
                //     {
                //         printf("Date 2 is earlier\n");
                //     }
                //     else if (d1.month<d2.month)
                //     {
                //         printf("Date 1 is earlier\n");
                //     }
                //     else if (d1.date>d2.date)
                //     {
                //         printf("Date 2 is earlier\n");
                //     }
                //     else if (d1.date<d2.date)
                //     {
                //         printf("Date 1 is earlier\n");
                //     }  
                // }
                // int main()
                // {
                //     date d1 = {2022, 12, 24};
                //     date d2 = {2002, 2, 15};
                //     displayDate(d1);
                //     displayDate(d2);
                //     cmpDate(d1, d2);
                //     return 0;
                // }

//by sir (good but not better than me)
            // #include<stdio.h>

            // typedef struct date{
            //     int date;
            //     int month;
            //     int year;
            // }date;

            // //Function for storing date
            // void display(date d){
            //     printf("The date is: %d/%d/%d\n", d.date, d.month, d.year);
            // }

            // //Function for Comparing date
            // int dateCmp(date d1, date d2){
            //     // Make decision on the basis of Year comparison
            //     if(d1.year>d2.year){
            //         return 1;
            //     }
            //     if(d1.year<d2.year){
            //         return -1;
            //     }

            //     // Make decision on the basis of Month comparison
            //     if(d1.month>d2.month){
            //         return 1;
            //     }
            //     if(d1.month<d2.month) {
            //         return -1;
            //     }

            //     // Make decision on the basis of Date comparison
            //     if(d1.date>d2.date){
            //         return 1;
            //     }
            //     if(d1.date<d2.date) {
            //         return -1;
               // //@here jaise hi koi ek 'return' statement run hojata hai, aage ke if statements execute nahi honge

            //     }
            //     return 0;
            // }

            // int main(){
            //     date d1 = {31, 11, 2031};
            //     date d2 = {9, 11, 2031};
            //     display(d1);
            //     display(d2);
            //     int a = dateCmp(d1, d2);
            //     printf("Date Comparison function returns: %d", a);
            //     printf("\t(If date1 is big then -1, else 1 is returned)");
            //     return 0;
            // }



//(10) . Solve problem 9 for time using typedef keyword.
//Answer:

            // #include<stdio.h>

            // typedef struct time{
            //     int hour;
            //     int minute;
            //     int second;
            // }time;

            // void display(time t){
            //     printf("The time is: %d : %d : %d\n", t.hour, t.minute, t.second);
            // }

            // int timeCmp(time t1, time t2){
            //     if(t1.hour>t2.hour){
            //         return 1;
            //     }
            //     if(t1.hour<t2.hour){
            //         return -1;
            //     }

            //     if(t1.minute>t2.minute){
            //         return 1;
            //     }
            //     if(t1.minute<t2.minute) {
            //         return -1;
            //     }

            //     if(t1.second>t1.second){
            //         return 1;
            //     }
            //     if(t1.second<t1.second) {
            //         return -1;
            //     }
            //     return 0;
            // }

            // int main(){
            //     time t1 = {23, 11, 20};
            //     time t2 = {9, 11, 31};
            //     display(t1);
            //     display(t2);
            //     int a = timeCmp(t1, t2);
            //     printf("Time Comparison function returns: %d", a);
            //     printf("\t(If time1 is big then 1, else -1 is returned)");
            //     return 0;
            // }



//Additional Question; make a code for Timestamp format 
// Timestamp Format Example: MM/dd/yy HH:mm:ss


//AMAZING CODING DONE BY ME TOTALLY! not sir
#include<stdio.h>
typedef struct timestamp
{
    int month;
    int day;
    int year;
    int hours;
    int minute;
    int seconds;
}ts;
void displayTIMESTAMP(ts t){
    printf("The timestamp is: %d / %d / %d /  %d : %d : %d\n",t.month, t.day, t.year, t.hours, t.minute, t.seconds);
}
void cmpTimestamp(ts t1, ts t2){
    if (t1.year>t2.year)
    {
        printf("Timestamp 2 is earlier due to year  \n");
    }
    else if (t1.year<t2.year)
    {
        printf("Timestamp 1 is earlier due to year  \n");
    }
    else if (t1.month>t2.month)
    {
        printf("Timestamp 2 is earlier due to month  \n");
    }
    else if (t1.month<t2.month)
    {
        printf("Timestamp 1 is earlier due to month  \n");
    }
    else if (t1.day>t2.day)
    {
        printf("Timestamp 2 is earlier due to day  \n");
    }
    else if (t1.day<t2.day)
    {
        printf("Timestamp 1 is earlier due to day  \n");
    }  


    else if (t1.hours>t2.hours)
    {
        printf("Timestamp 2 is earlier due to hours  \n");
    }
    else if (t1.hours<t2.hours)
    {
        printf("Timestamp 1 is earlier due to hours  \n");
    }
    else if (t1.minute>t2.minute)
    {
        printf("Timestamp 2 is earlier due to minute  \n");
    }
    else if (t1.minute<t2.minute)
    {
        printf("Timestamp 1 is earlier due to minute   \n");
    }
    else if (t1.seconds>t2.seconds)
    {
        printf("Timestamp 2 is earlier due to second  \n");
    }  
    else if (t1.seconds<t2.seconds)
    {
        printf("Timestamp 1 is earlier due to second  \n");
    }  
    else{
        printf("Exact same timestamp\n");
    }
}
int main()
{
    ts t1 = {6, 12, 2006, 12, 30, 225};   //  This is month/day/year/hour/min/sec
    ts t2 = {6, 12, 2006, 12, 30, 25};
    displayTIMESTAMP(t1);
    displayTIMESTAMP(t2);
    cmpTimestamp(t1, t2);
    return 0;
}