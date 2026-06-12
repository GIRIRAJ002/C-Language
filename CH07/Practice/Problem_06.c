// Write a program containing functions which counts the number of positive
// integers in an array.
#include<stdio.h>

int countpositive(int arr[] ,int );

int countpositive(int arr[],int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0)
        {
            count++;
        }
    }
    return count;
}
int main(){
    int ARR[]={1,-20,45,-5,-76,100,4};
    printf("The value of positive integers in the array is %d",countpositive(&ARR[0],7));
    
    return 0;
}