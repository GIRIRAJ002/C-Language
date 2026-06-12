// Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to
// make it store 15 number (from 7 x 1 to 7 x 15).

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr =(int*)calloc(10,sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i]= 7*(i+1);
    }
    
    
    ptr=realloc(ptr,15*sizeof(int));
    for (int i = 10; i < 16; i++)
    {
        ptr[i]= 7*(i+1);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("7 * %d = %d\n",i,ptr[i]);
    }
    free(ptr);
    return 0;

}