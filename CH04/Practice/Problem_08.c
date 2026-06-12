// Write a program to calculate the factorial of a given number using a for loop

#include<stdio.h>

int main(){
    int num,fact=1;
    printf("Enter the number whose factorial is need to be calculated:\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of the given number is %d",fact);
    return 0;
}