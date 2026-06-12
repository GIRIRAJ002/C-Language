// Write a program to sum first ten natural numbers using while loop

#include<stdio.h>

int main(){
    int num=0, sum=0;
    while (num<=10)
    {
        sum=sum+num;
        num++;
    }
    printf("The sum of first ten natural numbers is %d\n",sum);
    return 0;
}