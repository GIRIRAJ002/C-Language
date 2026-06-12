// Write a program to encrypt a string by adding 1 to the ascii value of its
// characters.

#include<stdio.h>
#include<string.h>
int main(){
    char ARR[]="abcde";
    for (int i = 0; i < strlen(ARR); i++)
    {
        ARR[i]=ARR[i]+1;
    }
    printf("%s\n",ARR);
    
    return 0;
}