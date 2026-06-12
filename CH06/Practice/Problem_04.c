// Write a function and pass the value by reference.

#include<stdio.h>

int pass(int*);

int pass(int* x)
{
    *x=*x + 5;
    return *x;
}
int main(){
    int a=10;
    pass(&a);
    printf("The value of a by passing the value to function by reference is %d",a);
    return 0;
}