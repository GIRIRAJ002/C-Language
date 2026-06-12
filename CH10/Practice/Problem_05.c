// Write a program to modify a file containing an integer to double its value.

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("ques5.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr=fopen("ques5.txt","w");
    fprintf(ptr,"%d",2*num);
    return 0;
}