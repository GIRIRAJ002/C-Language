// Attempt problem 4 using malloc()

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr=malloc(5*sizeof(int));
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