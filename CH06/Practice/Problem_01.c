// Write a program to print the address of a variable. Use this address to get the
// value of the variable.

#include<stdio.h>

int main(){
    int x=10;
    int* j=&x;
    printf("The address of variable x is %p\n",j);
    printf("The value of x using the address is %d\n",*j);
    return 0;
}