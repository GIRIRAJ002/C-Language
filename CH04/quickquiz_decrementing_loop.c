// Write a program to print ‘n’ natural numbers in reverse order.

#include<stdio.h>

int main(){
    int num; 
    printf("Enter the number you want to be printed:\n");
    scanf("%d",&num);
    for ( num;num;num--)
    {
        printf("%d\n",num);
    }
    
    return 0;
}