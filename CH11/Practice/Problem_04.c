// Create an array dynamically capable of storing 5 integers. Now use realloc so
// that it can now store 10 integers.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr=calloc(5,sizeof(int));
    ptr[0]=1;
    ptr[1]=1567;
    ptr[2]=178;
    ptr[3]=156;
    ptr[4]=134;
    ptr=realloc(ptr,10*sizeof(int));
    ptr[9]=100;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}