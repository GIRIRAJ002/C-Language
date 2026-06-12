// Write problem 5’s structure using ‘typedef’ keywords

#include<stdio.h>

typedef struct complex 
{
    int real;
    int img;
} comp;


int main(){
    comp c1;
    c1.real=10;
    c1.img=15;
    printf("The complex number is %d + i%d\n",c1.real,c1.img);
       
    return 0;
}