// Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().

#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr= (float*) malloc(5 * sizeof(float));
    ptr[0]=1.23;
    ptr[1]=4.56;
    printf("%.2f\n",ptr[0]);
    printf("%.2f\n",ptr[1]);
    free(ptr);
    return 0;
}