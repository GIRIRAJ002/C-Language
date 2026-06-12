// Write a program to count the occurrence of a given character in a string.

#include<stdio.h>

int main(){
    char ARR[]="Giriraj";
    char ch;
    int count=0;
    printf("Enter the character you want to count the occurance\n");
    scanf("%c",&ch);
    
    for (int i = 0; ARR[i]!= '\0' ; i++)
    {
        if(ARR[i]==ch)
        {
            count++;
        }
    }
    printf("%d\n",count);
    
    return 0;
}