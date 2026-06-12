// Write a program containing a function which reverses the array passed to it.
 
#include<stdio.h>
void rev(int*,int );

void rev(int* i,int n)
{
    int temp;
    for( int k =0;k<n/2;k++)
    {
        temp=i[k];
        i[k]=i[n-1-k];
        i[n-1-k]=temp;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int * k=arr;
    rev(k,9);
    for (int i = 0; i < 9; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}