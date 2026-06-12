#include<stdio.h>

int main(){
    
     int x, y=1;
     printf("Enter your number");
     scanf("%d",&x);
     
         switch(x+y){
         	case 1:
         	printf("You entered the value of x as 1\n");
         	break;    
         	case 2:
         	printf("You entered the value of x as 2\n");
         	break;
         	case 3:
         	printf("You entered the value of x as 3\n");
         	break;
         	case 10:
         	printf("You entered the value of x as 9\n");
         	break;
         	default :
         	printf("Your value did't matched\n");
         }
         	    
    return 0;
}
