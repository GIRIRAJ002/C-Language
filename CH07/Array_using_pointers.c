#include<stdio.h>

int main(){
    int arr[]={1,23,45,67};
    
    int* ptr=arr;  // it is same like int* ptr=&marks[0]

    for (int i = 0; i < 4; i++)
    {       
        // printf("The value at index %d is %d\n",i,arr[i]);
        printf("The value at index %d is %d\n",i,*ptr);
        ptr++;
    }
    
    return 0;
}