#include<stdio.h>

int main(){
	
	// What data type will 3.0/8 – 2 return?
	// according to precedence 3.0/8 will be evaluated first and will give floating value as a result then that value will be subtracted by 2
	
	float a= 3.0/8 - 2;
	printf("The value of a is %f",a);
	
	return 0;
}