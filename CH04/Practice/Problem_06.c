// Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

#include<stdio.h>

int main(){
    int sum=0;
    for ( int num=10;num ;num--)
    {
        sum=num+sum;
    }
    printf("The sum of first ten natural numbers is %d\n",sum);

    int num=10;
    do 
    {
        sum=sum+num;
        num--;
    } while(num);
    printf("The sum of first ten natural numbers is %d\n",sum);

    return 0;
}