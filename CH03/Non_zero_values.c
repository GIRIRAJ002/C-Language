#include<stdio.h>

int main(){
	
		if(1){
			printf("this if is executed\n");
			}
			
		if(1000){
			printf("this if is also executed\n");
			}
		if(2.55){
			printf("this if is also executed\n");
		    }
		if('c'){
			printf("this character inside if is also executed\n");
		    }
		if(0){
			printf("this if is not executed");
			}
						
	return 0;
}
//this means any non zero value or expressions are considered true in C