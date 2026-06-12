#include<stdio.h>

int main(){
	int a=5;
	int b=2;
	float c=a/b;
	
	printf("the value of c is %f",c);
	
	// yaha mistake ye hui ki dono operands int form m declared h to result bhi int form m hi aayega 
	// To correct this, make atleast one variable float
	
	 float A=5;
	 int B=2 ;
	 float C=A/B;
	 
	  printf("\nthe value of C is %f",C); 
	
	return 0;
}
/* Arithmetic operations between
1. int and int ---> int
2. int and float ----> float
3. float and float---> float

NOTE----->If first case m 2/5 krte to result aata 0 coz 2/5 is 0.4 and it willtake only int part in first case

 NOTE---> In programming, type compatibility is crucial. For int a = 3.5;, the float 3.5 is 
demoted to 3, losing the fractional part because a is an integer. Conversely, for float 
a = 8;, the integer 8 is promoted to 8.0
*/ 