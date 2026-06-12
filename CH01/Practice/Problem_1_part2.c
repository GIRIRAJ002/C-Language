/* Write a C program to calculate area of a rectangle:
Using inputs supplied by the user */

#include<stdio.h>

int main(){
     int length,breadth;
     
     printf("ENTER LENGTH\n");
     scanf("%d", &length);
      
     printf("ENTER BREADTH\n");
     scanf("%d", &breadth);
     
      printf("THE AREA OF THE REQUIRED RECTANGLE IS %d" , length*breadth);                                                   
    return 0;
}
