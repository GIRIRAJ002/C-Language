// Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
// The vectors must be two–dimensional

#include <stdio.h>
typedef struct TwoD_vector
{
    int x_comp;
    int y_comp;
} TwoD;

TwoD sumVector(TwoD x,TwoD y)
{
    TwoD Result;
    Result.x_comp=x.x_comp+y.x_comp;
    Result.y_comp=x.y_comp+y.y_comp;
    return Result;
}

int main()
{
    TwoD v1;
    v1.x_comp = 10;
    v1.y_comp = 15;
    TwoD v2;
    v2.x_comp=15;
    v2.y_comp=10;
    TwoD Sum= sumVector(v1,v2);
    printf("The sum of the given vector is %di + %dj\n",Sum.x_comp,Sum.y_comp);
    
    return 0;
}