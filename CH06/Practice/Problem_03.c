// Write a program to change the value of a variable to ten times of its current
// value.

#include<stdio.h>

int ten(int*);
int ten(int* a)   // call by reference using pointers
{
    *a=10*(*a);
} 
int main(){
    int x=10;
    ten(&x);
    printf("The value of a is %d",x);
    return 0;
}