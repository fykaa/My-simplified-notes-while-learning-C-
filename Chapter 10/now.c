#include<stdio.h>
int main()
{
    char name1, name2;
    int salary1, salary2;
    printf("Enter first name\n");
    scanf("%s", &name1);
    printf("Enter salary of first person\n");
    scanf("%d", &salary1);
    printf("Enter second name\n");
    scanf("%s", &name2);
    printf("Enter salary of second person\n");
    scanf("%d", &salary2);

    FILE *ptr;
    ptr = fopen("employee.txt", "w");
    fprintf(ptr, "%s , %d", name1, salary1);
    fprintf(ptr, "%s , %d", name2, salary2);

    fclose(ptr);
    return 0;
}
