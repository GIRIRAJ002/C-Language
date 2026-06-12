// Write a program to read a text file character by character and write its content
// twice in separate file.
#include<stdio.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    char ch;
    ptr1=fopen("ques3out.txt","w");
    ptr = fopen("ques3.txt","r");
    while(1)
    {
        ch=fgetc(ptr);
        
        if(ch == EOF)
        {
            break;
        }
        fputc(ch,ptr1);
        fputc(ch,ptr1);
    }
    fclose(ptr);
    return 0;
}