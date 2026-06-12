#include<stdio.h>

int main(){
    //POINTER ARITHMETIC USING INTEGER POINTER
    // int a=5;
    // int* ptr=&a;
    // printf("The address of a is %u\n",&a);
    // printf("The address of a is %u\n",ptr);

    // ptr++;    // value utni increment hogi jitna pointer ka format apne architecture me byte store krega, int store 4 byte (assume),ptr ke increment pr ptr ki value m +4 hoga  
    // printf("The VALUE of ptr is %u\n",ptr);

    //POINTER ARITHMETIC USING CHARACTER POINTER
    // char c='b';
    // char* ptr = &c;
    // printf("The address of c is %u\n",&c);
    // printf("The address of c is %u\n",ptr);

    // ptr++;     // as our pointer is of character type so value increases by 1
    // printf("The VALUE of ptr is %u\n",ptr);   

    //POINTER ARITHMETIC USING FLOAT POINTER
    float c=56.66;
    float* ptr = &c;
    printf("The address of c is %u\n",&c);
    printf("The address of c is %u\n",ptr);

    ptr++;     // as our pointer is of flaot type so value increases by 4
    printf("The VALUE of ptr is %u\n",ptr);   
    return 0;
}