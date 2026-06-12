#include<stdio.h>

int swap(int*,int*);

int swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=1,y=6;
    swap(&x,&y);
    printf("After swap the value of x and y is %d and %d\n",x,y); 
    return 0;
}