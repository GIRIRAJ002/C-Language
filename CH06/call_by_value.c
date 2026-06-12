#include<stdio.h>

int sum(int,int);

int sum(int a, int b)
{
    a=6;         // sum function can not change the value of x using a because copy of x is provided to sum in a
    return a+b;
}
int main(){
    int x=1,y=6;
    printf("The sum of x and y is %d\n",sum(x,y));
    printf("The value of x is %d\n",x);
    
    return 0;
}