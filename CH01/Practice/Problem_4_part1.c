/*Write a program to calculate simple interest for a set of values representing 
principal, number of years and rate of interest.*/

#include<stdio.h>

int main(){
    int p=500,t=10,r=10;
    printf("The amount of interest whose principal amount is %d ,\n rate is %d and time is %d years is \n %d", p,r,t,( p*r*t)/100);
     
    return 0;
}
