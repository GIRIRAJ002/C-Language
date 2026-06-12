#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));   // Seed the random number generator
    int random = rand() % 3;  // Range: 0 to 2
    int player;
    printf("Enter 0 for water, 1 for snake and 2 for gun:\n");
    scanf("%d",&player);
    printf("The Computer chose %d\n",random);
    
    /*
    0 ---> water
    1 ---> snake
    2 --->gun
    */
    if (player == 0 && random==0)       
    {
        printf("It's a tie\n");
        
    }
    if (player == 1 && random==1)       
    {
        printf("It's a tie\n");
        
    }
    if (player == 2 && random==2)       
    {
        printf("It's a tie\n");
        
    }
    if (player == 0 && random==1)
    {
        printf("Computer won !!\n");
    }
    if (player == 0 && random==2)
    {
        printf("Player won !!\n");
    }
    if (player == 1 && random==0)
    {
        printf("Player won !!\n");
    }
    if (player == 1 && random==2)
    {
        printf("Computer won !!\n");
    }
    if (player == 2 && random==0)
    {
        printf("Computer won !!\n");
    }
    if (player == 2 && random==1)
    {
        printf("Player won !!\n");
    }
    
    
    return 0;
}