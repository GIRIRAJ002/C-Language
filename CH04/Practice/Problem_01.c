//  Write a program to print multiplication table of a given number n.

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number whose table you want to be printed:\n");
    scanf("%d",&num);
    /* 
    for(int i=1;i<=10;i++)
     {
         printf("%d * %d = %d\n",num,i,num*i);
     }
    */
    /*
    int i=1;
    while (i<=10)
    {
        printf("%d * %d = %d\n", num, i, num*i);
        i++;
    }
    */
    int i=1;
    do
    {
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    } while (i<=10);
    
    return 0;
}