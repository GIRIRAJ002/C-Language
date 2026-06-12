#include<stdio.h>

int main(){
    FILE *ptr;
    // ptr = fopen("numbers.txt", "r");
    // char c = fgetc(ptr);
    // printf("%c\n",c);
    ptr= fopen("numbers.txt","w");
    fputc('c',ptr);


    return 0;
}