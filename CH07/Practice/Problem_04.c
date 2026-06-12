// Repeat problem 3 for a general input provided by the user using scanf.

#include<stdio.h>

int main()
{
    int table_of_n[10];
    int n;
    printf("Enter the number whose table you want to be printed:\n");
    scanf("%d",&n);

    for (int i = 0; i < 10; i++)
    {
        table_of_n[i]=n*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("%d X %d = %d\n",n,i+1,table_of_n[i]);
    }
    return 0;
}