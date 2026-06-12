// Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include<stdio.h>

int sum(int);
int sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n+sum(n-1);
    }
}

int main(){
    int num;
    printf("Enter the number upto which your want the sum:\n");
    scanf("%d",&num);
    printf("The sum of first %d natural number is %d",num,sum(num));
    return 0;
}