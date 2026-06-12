#include<stdio.h>

int main(){
    for(int i=0;i<=15;i++)
    {
        if(i==6)
        {
        // break;  This will end the loop whether the statement is true or false!!
        // continue;  This will skip the current iteration and the loop continues!! 
        }
        printf(" i is %d\n",i);
    }
    return 0;
}