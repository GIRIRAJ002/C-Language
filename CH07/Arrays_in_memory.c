#include<stdio.h>

int main(){
    int marks[5];
    printf("Enter the marks of 5 students\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The addresss of marks stored in index %d is %u\n",i,&marks[i]); // Array have contagiuous blocks in memory 
    }
    
    return 0;
}