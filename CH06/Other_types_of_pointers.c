#include<stdio.h>

int main(){
    char i='A';
    char *j = &i;   // j is a pointer pointing towards i (j is an character pointer)

    float k=5.124; 
    float* k1= &k;   // k1 is a pointer pointing towards k (k1 is a float pointer)
    printf("The address of i is %p\n",&i);   // & is address of operator
    printf("The address of i is %p\n", j);
    printf("The address of k is %p\n",&k);   // & is address of operator
    printf("The address of k is %p\n", k1);

    printf("The value at address j is %c\n",*(&i)); // * is value at address operator
    printf("The value at address j is %c\n",*(j));  // j stores the address of i , so using * at j will give the value of i 
    printf("The value at address k1 is %f\n",*(&k)); // * is value at address operator
    printf("The value at address k1 is %f\n",*(k1));  // k1 stores the address of k , so using * at k1 will give the value of k 
    return 0;
}