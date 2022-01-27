// Chapter 8 - Practice Set

//(1) Which of the following is used to appropriately read a multi-word string-
// Gets()
// Puts()
// Printf()
// Scanf()
//ANSWER:
            // GETS() is used to read a multiword string
            //puts() is used to print a multiword string
            // printf() is used to print any sstring
            // scanf() is used to read single word string.


//(2) Write a program to take a string as an input from the user using %c and %s. Confirm that the strings are equal.
//ANSWER:
                                                                                    //MY ANSWER ;;;TOTALLY WRONG
                                                                                                // #include<stdio.h>
                                                                                                // #include<string.h>
                                                                                                // int main()
                                                                                                // {
                                                                                                //     char st1[45];
                                                                                                //     char st2[45];
                                                                                                //     printf("ENTER STRING1:\n");
                                                                                                //     gets(st1);
                                                                                                //     printf("ENTER STRING2:\n");
                                                                                                //     gets(st2);
                                                                                                //     int val = strcmp(st1, st2);
                                                                                                //     if (val>0)
                                                                                                //     {
                                                                                                //         printf("STRINGS ARE NOT EQUAL, val is %d", val);
                                                                                                //     }
                                                                                                //     else if (val<0)
                                                                                                //     {
                                                                                                //         printf("STRINGS ARE NOT EQUAL val is %d", val);
                                                                                                //     }
                                                                                                //     else{
                                                                                                //         printf("strings are equal");
                                                                                                //     }
                                                                                                //     return 0; 
                                                                                                // }
//BY SIR 
            // #include<stdio.h>
            // #include<string.h>
            // int main()
            // {
            //     char str1[45];
            //     char str2[45];
            //     char c;
            //     char i=0;
            //     printf("Enter the value of string 1\n");
            //     scanf("%s", str1);
            //     printf("Enter the value of string 2 character by character\n");
            //     while (c!='\n')
            //     {
            //         fflush(stdin);                  //we'll have to use this taaki previously entered value bhi next loop mein scan naa hojaye
            //         scanf("%c", &c);
            //         str2[i]= c;
            //         i++;
            //     }
            //     str2[i-1]= '\0';                    //we had to take i-1 because str[i] ki value \0 rakhne se enter krne pr "\n" ko bhi str2 mein consider kiya jaa raha tha. iski vajah se strcmp() use krne par , str1 and str 2 mein ek \n ka difference hamesha araha tha 

            //     printf("The value of string1 is %s\n", str1);
            //     printf("The value of string2 is %s\n", str2);
            //     printf("strcmp function for these strings returns %d\n", strcmp(str1, str2));
            //     return 0; 
            // }
//(3) Write your own version of strlen function from <string.h>
//ANSWER:
                                                                                                //by me(TOTALLY WRONG ANSWER)
                                                                                                            // #include<stdio.h>
                                                                                                            // #include<string.h>
                                                                                                            // int main()
                                                                                                            // {
                                                                                                            //     char s[100];
                                                                                                            //     printf("ENTER A STRING:\n");
                                                                                                            //     gets(s);
                                                                                                            //     int length = strlen(s);
                                                                                                            //     for (int i = 0; i < length; i++)
                                                                                                            //     {
                                                                                                            //         printf("%c is the %d element of the array '%s'\n",s[i], (i+1), s );
                                                                                                            //     }
                                                                                                            //     printf("\n");
                                                                                                            //     printf("The length of the string '%s' is %d\n\n", s, length);
                                                                                                            //     return 0; 
                                                                                                            // }
//bySIR
//Basically we have to make use of functions to count length of any string without using strlen
            // #include<stdio.h>
            // int count(char *st){
            //     int len= 0;
            //     char *ptr= st;
            //     while (*ptr != '\0')
            //     {
            //         len++;
            //         ptr++;
            //     }
            //     return len;
            // }
            // int main()
            // {
            //     char st[]= "harrydada";
            //     printf("the number of characters are %d", count(st));
            //     return 0; 
            // }
//MY SOLUTION;
            // #include<stdio.h>
            // int main()
            // {
            //     char st[50];
            //     printf("Enter string\n");
            //     gets(st);
            //     int l = 0;
            //     char *ptr;
            //     ptr = st;
            //     while (*ptr != '\0')
            //     {
            //         l++;
            //         ptr++;
            //     }
            //     printf("%d", l);
            //     return 0; 
            // }



//(4) Write a function slice() to slice a string. 
    //It should change the original string such that it is now the sliced strings. 
    //Take m and n as the start and ending position for slice.
//ANSWER:

            // #include<stdio.h>
            // void slice(char *st, int m , int n){
            //     int i = 0;
            //     while ((m+i)<n)
            //     {
            //         st[i]= st[i+m];     //0th element becomes 1st element, i.e. h->a
            //                             //1st elemnt becomes 2nd element,  i.e. a->r
            //                             //2th elemnt becomes 3rd element,  i.e. r->r
            //                             //3rd elemnt becomes 4th element,  i.e. r->y
            //                             //4th element becomes 5th element, i.e. y->j
            //                             //NOW n = 6 hence m+i= 1+5=6 toh bass yaha tak string will be made..
            //         i++;
            //     }
            //     st[i]='\0';     //see ith element is not printed because i+m = n (not <n), so jo ith element hai vo \0 karne se string will be completed, and you are able to print the string
            // }
            // int main()
            // {
            //     char st[]= "harryjiki";
            //     slice(st, 1,6);
            //     printf("%s", st);
            //     return 0; 
            // }
//haryjikijai-------- ryji



//(5) Write your own version of strcpy function from <string.h>
//ANSWER:
            // #include<stdio.h>
            // void copy(char *str1, char *str2){
            //         str1= str2;                     //so this makes harry== rohan
            //         printf("Now str1 have become %s\n", str1);
            //         printf("and str2 is still %s", str2);
            // }
            // int main()
            // {
            //         char *str1 = "Harry";
            //         char *str2 = "Rohan";
            //         copy(str1, str2);
            //         return 0; 
            // }


//(6) Write a program to encrypt a string by adding 1 to the ASCII value of its characters.
//ANSWER:
            // #include<stdio.h>
            // void encrypt(char *c){
            //     char *ptr;          //@ *ptr represents charcter at that address i.e. ptr is pointing -------- ptr represents just address 
            //     ptr= c;
            //     while (*ptr != '\0')
            //     {
            //         *ptr = *ptr +1;     //This is changing ASCII value of address at i, where pointer points to i
            //         ptr++;              //This is changing its address.  matlab pointer now points to (i+1)
            //     }
            // }
            // int main()
            // {
            //     char c[50];
            //     printf("ENTER YOUR PASSWORD\n");
            //     gets(c);
            //     encrypt(c);
            //     printf("Your string encrypted is %s\n", c);
            //     return 0; 
            // }

//(7) Write a program to decrypt the string encrypted using the encrypt function in problem 6.
//ANSWER:

            // #include<stdio.h>
            // void encrypt(char *c){
            //     char *ptr;         
            //     ptr= c;
            //     while (*ptr != '\0')
            //     {
            //         *ptr = *ptr +1;          
            //         ptr++;
            //     }
            // }
            // void decrypt(char *c){
            //     char *ptr;
            //     ptr = c;
            //     while (*ptr != '\0')
            //     {
            //         *ptr = *ptr -1;
            //         ptr++;
            //     }   
            // }
            // int main()
            // {
            //     char c[50];
            //     printf("Data to be encrypted\n");
            //     gets(c);
            //     encrypt(c);
            //     printf("The encrypted data is %s\n", c);
            //     decrypt(c);
            //     printf("The decrypted data is %s\n", c);
            //     return 0; 
            // }

//(8) Write a program to count the occurrence of a given character in a string.
            // //ANSWER:
            // #include<stdio.h>
            // int occurence(char *str, char c){
            //     char *ptr = str;
            //     int count=0;
            //     while ( *ptr!= '\0')
            //     {
            //         if (*ptr== c)
            //         {
            //             count++;
            //         }
            //         ptr++;
            //     }
            //     return count;
            // }
            // int main()
            // {
            //     char str[50];
            //     printf("ENTER THE STRING\n");
            //     gets(str);
            //     char alphabet;
            //     printf("ENTER THE ALPHABET YOU WANA COUNT\n");
            //     scanf("%c", &alphabet);
            //     int count = occurence(str, alphabet);
            //     printf("%c came in the string %d numbr of times\n", alphabet, count);
            //     return 0; 
            // }


//(9) Write a program to check whether a given character is present in a string or not.
//ANSWER:

#include<stdio.h>
void check(char *str, char c){
    char *ptr = str;
    while (*ptr != '\0')
    {
        if (*ptr== c)
        {
            printf("YES THIS CHARACTER %c IS PRESENT IN THE STRING\n", c);
            break;
        }
        ptr++;
    }
}
int main()
{
    char str[]= "harrybhaiya";
    check(str, 'j');
    return 0; 
}


// START WATCHIING FROM 11;18 for question 5;