#include<stdio.h>

int main(){
	int a;
	int b;
	
	printf("ENTER THE VALUE OF a\n");
	scanf("%d",&a);
	
	printf("ENTER THE VALUE OF b\n");
	scanf("%d",&b);
	
	int c=a+b;
	
	printf("The value of a is %d and value of b is %d and their sum is %d\n",a,b,c);
	
	// MODULUS operator is used to get the remainder 
	
	printf("The remainder when a is divided by b is %d\n",a%b);
	
	return 0;
}
/* operators are used to perform operation between operands 
*,-,+,/,% are the operations 
% is called modulus operator and is used to get the remainder when one number is divided by another

NOTE---> there is no  specific operator for exponentiation in C
e.g int a=b^c;  (here sign(^) is not used for exponentiation)[COMMONLY ASKED IN INTERVIEWS] 
*/