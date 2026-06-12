// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2
#include<stdio.h>
#define G 9.8

float force(float); // prototype

float force(float m )
{
    return m*G;
}

int main(){
    float mass=10;
    printf("The force of attraction on a body of mass %f kg exerted by earth is %f N",mass,force(mass));
    return 0;
}