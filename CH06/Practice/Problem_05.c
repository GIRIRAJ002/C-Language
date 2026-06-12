// Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().

#include<stdio.h>

void calc(int ,int ,int*, float *);

void calc(int a,int b,int*sum,float*avg)
{
    *sum=a+b;
    *avg=(a+b)/2.0;
}

int main(){
    int x=5,y=6,s;
    float avg;
    calc(x,y,&s,&avg);
    printf("The sum of x and y is %d\n ",s);
    printf("The avg of x and y is %.2f\n ",avg);
    return 0;
}