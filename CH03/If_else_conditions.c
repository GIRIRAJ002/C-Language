#include<stdio.h>

int main(){
	int age;
	printf("ENTER YOUR AGE\n");
	scanf("%d",&age);
	
	if(age>18){
		printf("You are an adult");
	    }
	    
	    
		else{
			printf("you are a minor");
		}
		
	return 0;
}
/* if else statements are basically use when there is a condition to be checked.
like for example, "agar condition fulfill ho rhi h to if wala function execute krdo wrna else wala function execute krdo."
NOTE--" else block is optional not necessary."
*/ 