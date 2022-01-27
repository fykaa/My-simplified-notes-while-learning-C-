/*
 
Home » Day 3 Intro to Conditional Statements Solution- [Hackerrank]

Intro to Conditional Statements Solution

30 DAYS OF CODE
Day 3 Intro to Conditional Statements Solution- [Hackerrank]
Hackerrank Day 3 Intro to Conditional Statements Solution in C, C++, and Java programming language. In this programming problem, we are going to learn about the If-Else statements,
 We have to use Even-Odd logic, and Greater and Less Number logic to solve this Programming Problem of Hackerrank Website.

Problem Statement:- According to Hackerrank, you should follow these four given conditions. 
Hackerrank Intro to Conditional Statements Solution in C.

If ‘n‘ is odd, print Weird.
If ‘n‘ is even and in the inclusive range of 2 to 5, print Not Weird.
‘n‘ is even and in the inclusive range of 6 to 20, print Weird.

*/

//my soln

            // #include<stdio.h>
            // int main()
            // {
            //     int n = -2;
            //     if (n%2 !=0)
            //     {
            //         printf("WEIRD");
            //     }
            //     else if (n%2 == 0 && n>2 && n<5 )
            //     {
            //         printf("Not weird");
            //     }
            //     else if (n%2 == 0 && n>6 && n<20)
            //     {
            //         printf("weird");
            //     }
            //     else if (n%2 == 0 && n>20)
            //     {
            //         printf("NOT WEIRD");
            //     }
            //     else{
            //         printf("Not even weird");        //for less than 2 waale even  numbers
            //     }
            //     return 0;
            // }




// //hackerrank's given format ke andar solution
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);



int main()
{
    int N = parse_int(ltrim(rtrim(readline())));


        //BASS YAHA SE first return tak ka solution i typed!(10 lines approx)

	if(N%2==0)
    {
        if(N>=2 && N<=5)
        {
            printf("Not Weird");	
		}
        else if(N>=6 && N<=20)
        {
        	printf("Weird");
		}
        else
        {
        	printf("Not Weird");
		}    
    }
    else
    {
    	printf("Weird");	
	}
    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}












//tutorial book's solution

// #include <assert.h>
// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stddef.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char* readline();

// int main()
// {
//     char* N_endptr;
//     char* N_str = readline();
//     int N = strtol(N_str, &N_endptr, 10);


//     // (MAIN ANSWER HERE) Complete the solve function below.
    
	// if(N%2==0)
    // {
    //     if(N>=2 && N<=5)
    //     {
    //         printf("Not Weird");	
	// 	}
    //     else if(N>=6 && N<=20)
    //     {
    //     	printf("Weird");
	// 	}
    //     else
    //     {
    //     	printf("Not Weird");
	// 	}    
    // }
    // else
    // {
    // 	printf("Weird");	
	// }
        
//     if (N_endptr == N_str || *N_endptr != '\0') { exit(EXIT_FAILURE); }

//     return 0;
// }

// char* readline() {
//     size_t alloc_length = 1024;
//     size_t data_length = 0;
//     char* data = malloc(alloc_length);

//     while (true) {
//         char* cursor = data + data_length;
//         char* line = fgets(cursor, alloc_length - data_length, stdin);

//         if (!line) { break; }

//         data_length += strlen(cursor);

//         if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

//         size_t new_length = alloc_length << 1;
//         data = realloc(data, new_length);

//         if (!data) { break; }

//         alloc_length = new_length;
//     }

//     if (data[data_length - 1] == '\n') {
//         data[data_length - 1] = '\0';
//     }

//     data = realloc(data, data_length);

//     return data;
// }


