// Quick Quiz: Write a program to create an array of size n using calloc where n is an
// integer entered by the user.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the size of dynamically alloted memory array:\n");
    scanf("%d",&n);
    float *ptr= (float*)calloc(n,sizeof(float));
    ptr[0]=1.2;
    ptr[6]=2.4;
    printf("%.2f\n",ptr[0]);
    printf("%.2f\n",ptr[6]);
    free(ptr); 
    
    return 0;
}