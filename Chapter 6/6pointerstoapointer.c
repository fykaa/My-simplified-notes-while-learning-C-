/*Pointers to a pointer:
Just like j is pointing to i or storing the address of i, we can have another variable k, which can store the address of j. What will be the type of k?
int **k;
k= &j;



//by me:
j=&i means *j   ------j has adress of integer i, making j, a pointer of an integer
k=&*j means **k ------k has adress of pointer j, making k, a pointer of a pointer.



//notes;
        i= 72
        adress of i= 87994
        type of i = integer

        j = &i = 87994
        address of j= 87998
        type of j = pointer of integer= int* 

        k = &*j = 87998
        address of k= 88004
        type of k = pointer of pointer of integer = int**

//ALSO, k ke bhi adress ko save kiya ja sakta hai using eg. int ***l where l=&k=88004

We can even go further one level and create a variable l of type int*** to store the address of k.
We mostly use int* and int** sometimes in real-world programs.


