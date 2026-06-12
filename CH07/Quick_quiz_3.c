// Quick Quiz: Create a 2-d array by taking input from the user. Write a display function to
// print the content of this 2-d array on the screen.

#include<stdio.h>

int main(){
    int arr[2][3];
    for (int i = 0; i< 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i = 0; i< 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}