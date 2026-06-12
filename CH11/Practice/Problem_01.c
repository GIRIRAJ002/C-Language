//  Write a program to dynamically create an array of size 6 capable of storing 6
// integers.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr=(int*)calloc(6,sizeof(int));
    ptr[0]=1;
    ptr[1]=1567;
    ptr[2]=178;
    ptr[3]=156;
    ptr[4]=134;
    ptr[5]=12;
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    
    return 0;
}