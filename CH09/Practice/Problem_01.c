//  Create a two-dimensional vector using structures in C.

#include <stdio.h>
typedef struct TwoD_vector
{
    int x_comp;
    int y_comp;
} TwoD;

int main()
{
    TwoD v1;
    v1.x_comp = 10;
    v1.y_comp = 15;
    printf("The vector is %di + %dj\n", v1.x_comp, v1.y_comp);
    return 0;
}