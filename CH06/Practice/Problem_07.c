// Try problem 3 using call by value and verify that it does not change the value of
// the said variable.

#include<stdio.h>

int ten(int);

int ten(int a)   // call by value using pointers
{
    a=10*(a);
} 
int main(){
    int x=10;
    ten(x);
    printf("The value of a is %d",x);  // it will not give 100, coz a copy of variable x was went to the ten function , it will not change the value of x in main function
    return 0;
}