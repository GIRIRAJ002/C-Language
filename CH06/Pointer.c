#include<stdio.h>

int main(){
    int i=26;
    int* j = &i;    // j is a pointer pointing towards i (j is an integer pointer)
    printf("The address of i is %p\n",&i);   // & is address of operator
    printf("The address of i is %p\n", j);

    printf("The value at address j is %d\n",*(&i)); // * is value at address operator
    printf("The value at address j is %d\n",*(j));  // j stores the address of i , so using * at j will give the value of i  
    return 0;
}