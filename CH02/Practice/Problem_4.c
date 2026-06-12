#include<stdio.h>

int main(){
	
	// Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
	
	int y=3,z=3,k=1;
	float x=2.0;
	
	printf("The value is %f",3*x/y - z+k);
	
	// This equation will be evaluated by precedence, first priority will be give to /* then +-
	// Associativity will be used for same priority order [ */ and +- follow left to right ]
	// 3*x/y – z+k
	//6/y - z +k
	// 2- z + k
	// -1 + k
	// 0 
	
	return 0;
}	