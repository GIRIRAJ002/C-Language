// Write a program using function to find average of three numbers.

#include<stdio.h>

float avg(float,int,int); // function prototype

float avg(float a,int b, int c)
{
    return (a+b+c)/3;
}
int main(){
    int x=1,y=5,z=1;
    float a= avg(x,y,z);
    printf("%f\n",a);
    return 0;
}