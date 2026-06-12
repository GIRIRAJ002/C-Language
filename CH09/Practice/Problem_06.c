// Create an array of 5 complex numbers created in Problem 5 and display them
// with the help of a display function. The values must be taken as an input from
// the user.

#include<stdio.h>

typedef struct complex 
{
    int real;
    int img;
} comp;
void display(comp c[],int n)
{
    for (int i = 0; i < n ; i++)
    {
        printf("The complex number is %d + i%d\n",c[i].real,c[i].img);
    }
    
}

int main(){
    comp c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part of complex %d\n",i+1);
        scanf("%d",&c[i].real);
        printf("Enter the imaginary part of complex %d\n",i+1);
        scanf(" %d",&c[i].img);        
    }
    display(&c[0],5);
    
       
    return 0;
}