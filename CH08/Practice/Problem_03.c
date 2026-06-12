// Write your own version of strlen function from <string.h>
#include<stdio.h>

int len(char*);
int len(char* x)
{
    int L=0;
    for (int i = 0; x[i] != '\0' ; i++)
    {
        L++;
    }
    return L;
}
int main(){
    char ARR[]="Giriraj";
    printf("The number of characters in string is %d\n",len(ARR));
    
    return 0;
}