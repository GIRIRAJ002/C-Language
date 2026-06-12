/*Write a program to find greatest of four numbers entered by the user.*/

#include<stdio.h>

int main (){
	int num1,num2,num3,num4;
	printf("Enter your first number:\n");
	scanf("%d",&num1);
	printf("Enter your second number:\n");
	scanf("%d",&num2);
    printf("Enter your third number:\n");
	scanf("%d",&num3);
	printf("Enter your fourth number:\n");
	scanf("%d",&num4);
	
	if(num1>num2&&num1>num3&&num1>num4)
	  printf("The largest number is %d",num1);
	  
	else if(num2>num1&&num2>num3&&num2>num4)
	  printf("The largest number is %d",num2);
	  
	else if(num3>num2&&num3>num1&&num3>num4)
	  printf("The largest number is %d",num3);
	
	else if(num4>num2&&num4>num3&&num4>num1)
	  printf("The largest number is %d",num4);
	  
	  return 0;
}
	
	
	