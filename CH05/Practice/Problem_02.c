// Write a function to convert Celsius temperature into Fahrenheit.

#include<stdio.h>

float convert(float);

float convert(float c)
{
    return (9.0/5.0)*c + 32;
}

int main(){
    float temp;
    printf("Enter the temperature in celcius:\n");
    scanf("%f",&temp);
    
    printf("The farhrenheit value of %.2f degree celcius is %.2f\n",temp,convert(temp));
    
    return 0;
}