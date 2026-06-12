/*Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height*/

#include<stdio.h>

int main(){
    int radius;
    
    printf("ENTER RADIUS\n");
    scanf("%d", &radius);
    
    printf("The area of the required circle whose radius is %d is %f",radius, radius*radius*3.14);   
     
    return 0;
}
