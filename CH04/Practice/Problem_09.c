// Write a program to calculate the factorial of a given number using a while loop.

#include<stdio.h>

int main(){
    int num,fact=1,i=1;
    printf("Enter the number whose factorial needs to be calculated:\n");
    scanf("%d",&num);
    while (i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("The factorial of the given number is %d",fact);
    return 0;
}