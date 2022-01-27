        #include<stdio.h>
        void ten(int *a){
            printf("the ten times of x is %d\n", *a*10 );
        }
        int main()
        {
            int x=2;
            printf("THE VALUE OF X BEFORE CHANGING IS %d\n", x);
            ten(&x);
            printf("the value of x after funcion is %d", x);
            return 0;
        }