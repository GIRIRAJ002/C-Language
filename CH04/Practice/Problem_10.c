// Write a program to check whether a given number is prime or not using loops

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number :\n");
    scanf("%d",&num);
    int prime=1;
    if (num==1 || num==0)
    {
        prime=0;
    }
    else
    {
    for(int i=2;i<num;i++)
    {
        if (num%i==0 && num!=2)
        {
            prime=0;
            break;
        }
    }
    }
    if(prime)
    {
        printf("The number is prime\n");
    }
    else 
    {
        printf("The number is not prime\n");
    }
    return 0;
}