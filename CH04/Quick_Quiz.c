/*Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop 
counter is initialized to 0.*/

#include<stdio.h>

int main(){
	int i=0;
	while ( i<=20){
		if (i>=10){
		printf("The value is %d\n",i);
		}
        i++;
		
	}
	return 0;
}
// KEY CONCEPT ----> A while loop only runs when the condition is true at the beginning.