/*Write a program to determine whether a character entered by the user is 
lowercase or not.*/

#include<stdio.h>

int main(){
    char ch;
    printf("Enter your character:\n");
    scanf("%d",&ch);                     //new concept--> %d use krne pr ASCII value daalni padegi coz hum input int m de rhe h but %c use krne pr hum normal characters daal skte h 
    
    if (ch>=97 && ch<=122)
      printf("The entered character is lowercase\n");
    else
      printf("The entered character is not lowercase\n");
      
    return 0;
}