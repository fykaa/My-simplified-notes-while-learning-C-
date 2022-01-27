// Chapter 10 - Practice Set 

//(1). Write a program to read three integers from a file.
//Answer:

            // #include<stdio.h>
            // int main()
            // {
            //     FILE *ptr;
            //     int num1, num2 , num3;
            //     ptr = fopen("createfile.txt", "r");
            //     fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
            //     printf("The integer num1 is %d\n", num1);
            //     printf("The integer num2 is %d\n", num2);
            //     printf("The integer num3 is %d\n", num3);
            //     return 0;
            // }

//(2). Write a program to generate a multiplication table of a given number in text format. Make sure that the file is readable and well-formatted.
//Answer:
            // #include<stdio.h>
            // int main()
            // {
            //     FILE *tab;
            //     tab = fopen("multiplication.txt", "w");
            //     int num;
            //     printf("Enter the number\n");
            //     scanf("%d", &num);
            //     for (int i = 1; i <= 10; i++)
            //     {
            //         fprintf(tab, "%d x %d = %d\n", num, (i),(num*i) );
            //     }
            //      fclose(tab);
            //     return 0;
            // }



//(3). Write a program to read a text file character by character and write its content twice in a separate file.
//Answer:

            // #include<stdio.h>
            // int main()
            // {
            //     FILE *ptr1;
            //     FILE *ptr2;
            //     ptr1 = fopen("a.txt", "r");
            //     ptr2 = fopen("b.txt", "w");
            //     char c = fgetc(ptr1);
            //     while (c != EOF)     //matlab  agar c is not equal to EOF then run the program.
            //     {
            //         fputc(c, ptr2);
            //         fputc(c, ptr2);
            //         c = fgetc(ptr1);
            //     }
                
            //     fclose(ptr1);
            //     fclose(ptr2);
            //     return 0;
            // }



//(4). Take name and salary of two employees as input from the user and write them to a text file in the following format:
//         name1, 3300
//         name2, 7700
//Answer:

///BY ME

            // #include<stdio.h>
            // typedef struct employee
            // {
            //     char name[100];
            //     int salary;
            // }e;

            // int main()
            // {

            //     e emp1;
            //     e emp2;

            //     printf("Enter name1:      \n");
            //     scanf("%s", &emp1.name);
            //     printf("Enter salary1:      \n");
            //     scanf("%d", &emp1.salary);
            //     printf("Enter name2:      \n");
            //     scanf("%s", &emp2.name);
            //     printf("Enter salary2:      \n");
            //     scanf("%d", &emp2.salary);

            //     FILE *ptr;
            //     ptr = fopen("employee.txt", "w");
            //     fprintf(ptr, "%s, %d\n" , emp1.name, emp1.salary);
            //     fprintf(ptr, "%s, %d\n" , emp2.name, emp2.salary );
            //     //WORKS TOTALLY WELL
            //     return 0;
            // }



//(5). Write a program to modify a file containing an integer to double its value.
//        If old value = 2, then new file value = 4

//Answer:

            // #include<stdio.h>
            // int main()
            // {
            //     FILE *ptr;
            //     ptr = fopen("num.txt", "r");
            //     int num;
            //     fscanf(ptr, "%d", &num);
            //     fclose(ptr);
            //     FILE *ptrr;
            //     ptrr = fopen("num.txt", "w");
            //     fprintf(ptr, "%d", (num*num));
            //     fclose(ptr);
            //     return 0;W
            // }