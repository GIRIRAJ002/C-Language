// Repeat problem 7 for a custom input given by the user.

#include<stdio.h>

int main(){
    int Table[3][10];
    int num[3];
    printf("Enter three numbers whose table you want to be printed:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10 ; j++)
        {
            Table[i][j]=num[i] * (j+1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ",Table[i][j]);
        }
        printf("\n");
    }
    return 0;
}