#include<stdio.h>

int fact(int);
int fact(int a)
{
    if (a==0 || a==1)    // base case
    {
        return 1;
    }
    return a * fact(a-1); // recrursion 
}

int main(){

    int b=5;
    int a= fact(b);
    printf("The factorial of %d is %d",b,a);  

    return 0;
}