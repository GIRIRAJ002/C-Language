// Implement 10 using other types of loops.

#include<stdio.h>

int main(){
    int num,i=2,prime=1;
    printf("Enter the number :\n");
    scanf("%d",&num);
    while((i*i)<=num)
    {
        if(num%i==0)
        {
            prime=0;
            break;
        }
        i++;
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