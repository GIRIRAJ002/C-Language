#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));   // Seed the random number generator
    int random = (rand() % 100) + 1;  // Range: 1 to 100
    int Guess,count=0;
    while (1)
    {
        printf("Enter your guess:\n");
        scanf("%d",&Guess);
        count++;
        
        if(Guess<random)
        {
            printf("Your number is lower than the answer\n");
        }
        else if(Guess>random)
        {
            printf("Your number is higher than the answer\n");
        }
        else if(Guess==random)
        {
            printf("You Predicted the right number!!");
            break;
        }
        
    }
    printf("The number of guesses you take = %d\n",count);

    return 0;

}