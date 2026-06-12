/*Write a program to calculate simple interest for a set of values representing 
principal, number of years and rate of interest and input is given by user.*/

#include<stdio.h>

int main(){
	float P;
	int T,R;
    
    printf("ENTER YOUR PRINCIPAL AMOUNT:\n");
    scanf("%f", &P);
    
    printf("ENTER YOUR RATE OF INTEREST:\n");
    scanf("%d", &R);
    
    printf(" ENTER YOUR PERIOD OF TIME:\n");
    scanf("%d", &T);
    
    printf("The amount of interest from the given information is %f\n\n", (P*R*T)/100);
    
    printf("This code is written by GIRIRAJ");
    
    return 0;
}    
    