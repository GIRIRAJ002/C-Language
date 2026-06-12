// Write a program to decrypt the string encrypted using encrypt function in
// problem 6.

#include<stdio.h>
#include<string.h>

void Encrypt(char*);
void Encrypt(char* x)
{
    for (int i = 0; x[i] !='\0'; i++)
    {
        x[i]=x[i]+1;
    }
}
void Decrypt(char*);
void Decrypt(char *x)
{
    for (int i = 0;  x[i] !='\0'; i++)
    {
        x[i]=x[i]-1;
    }   
}

int main(){
    char ARR[]="abcde";
    printf("Before Encryption\n");
    printf("%s\n",ARR);
    printf("After Encryption\n");
    Encrypt(ARR);
    printf("%s\n",ARR);
    printf("After Decryption\n");
    Decrypt(ARR);
    printf("%s\n",ARR);
    
    
    return 0;
}