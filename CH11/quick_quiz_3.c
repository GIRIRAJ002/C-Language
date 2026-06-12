// Quick Quiz: Write a program to demonstrate the usage of free() with malloc().

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr= (int*)malloc(4*sizeof(int));
    ptr[0]=1;
    free(ptr);
    
    printf("%d\n",ptr[0]);
    return 0;
}