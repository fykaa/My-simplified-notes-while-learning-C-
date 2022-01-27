 #include<stdio.h>
        #include<string.h>
        int main()
        {
            char *string1 = "Harry";
            char string2[40];
            strcpy(string2, string1);       //string2 now contains "harry"
            printf("NOW THE STRING2 IS %s\n", string2);
            return 0; 
        }