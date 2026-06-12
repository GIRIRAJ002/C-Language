#include<stdio.h>

int sum(int,int); //Function prototype

int sum(int x,int y)  // Function definition
{
    printf("The sum is %d\n",x+y);
    return 0;
}

int main(){
    // int a=12,b=13;
    // int d=a+b;
    // printf("%d",d);
    sum(12,13); // Function call (it pauses the main function and goes to our function we made)
    // We call sum function with parameters 12 and 13 (technical terminology)

    int c=sum(12,12);  // This is also a function call , it will first run sum and assign the return value to c
    printf("%d\n",c); //sum function will print x+y, but the return value is zero so zero will be assigned to c ,this will print zero

    return 0;
}