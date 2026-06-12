/*3. Calculate income tax paid by an employee to the government as per the slabs 
mentioned below:
 Income Slab -Tax 
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

/*#include<stdio.h>

int main (){
	float income,tax;
	printf("Enter your income:");
	scanf("%f",&income);
	
	if (income<250000)
	  printf("There is no applicable tax for your income.\n");
	else if (income<500000)
	  printf("The amount of applicable tax for your income is : %f \n", 0.05*income);
	else if (income<1000000 )
	  printf("The amount of applicable tax for your income is : %f \n", 0.2*income);
	 else if (income > 1000000)
	   printf("The amount of applicable tax for your income is : %f \n", 0.3*income);
	   
	   return 0;
}(MY SOLUTION)*/

#include<stdio.h>

int main(){
	float income,tax;
	printf("Enter income:\n");
	scanf("%f",&income);
	if(income<=250000)
	tax=0;
	else if (income>250000 && income<=500000)
	tax= (income-250000)*0.05;
	else if (income>500000 && income<=1000000)
	tax= (250000*0.05)+ (income-500000)*0.2;
	else
	tax= (250000*0.05)+ (500000*0.2)+ (income-1000000)*0.03;
	
	printf("The total tax you have to pay is %f",tax);
	return 0;
}