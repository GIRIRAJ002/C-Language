// Use the array in problem 1 to store 6 integers entered by the user.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr=(int*)calloc(6,sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter number %d\n",i+1);
        scanf("%d",&ptr[i]);
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    
    return 0;
}