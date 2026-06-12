/*Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height*/

#include<stdio.h>

int main(){
    int radius,height;
    
    printf("ENTER RADIUS\n");
    scanf("%d", &radius);
    
    printf("ENTER HEIGHT\n");
    scanf("%d", &height);
    
    printf(" The volume of the cylinder whose radius is %d and height is %d is %f", radius,height, 3.14*radius*radius*height);
     
    return 0;
}
