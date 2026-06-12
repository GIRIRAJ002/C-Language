// Quick Quiz: Try these operations on another variable by creating pointers in a separate
// program. Demonstrate all the four operations.
// 1. Addition of a number to a pointer.
// 2. Subtraction of a number from a pointer.
// 3. Subtraction of one pointer from another.
// 4. Comparison of two pointer variables.

#include<stdio.h>

int main(){
    int a=10;
    int* ptr1=&a;
    printf("The address of a is %u\n",ptr1);
    ptr1+=2;
    printf("The value of ptr1 is %u\n",ptr1);

    int b=20;
    int* ptr2=&b;
    printf("The address of b is %u\n",ptr2);
    ptr2-=2;
    printf("The value of ptr2 is %u\n",ptr2);

    int c=30;
    int d=40;
    int* ptr3=&c;
    int* ptr4=&d;
    printf("The address of c is %u\n",ptr3);
    printf("The address of d is %u\n",ptr4);
    printf("The value of subtraction of one pointer from another whose addresses are %u and %u is %td\n",ptr3,ptr4,ptr4-ptr3); 
    
// Why you sometimes saw 4294967295
// That happens when -1 is printed as unsigned.
// Signed value: -1
// Unsigned 32-bit value: 4294967295
// that is why %td is used

    int e=50,f=60;
    int* ptr5=&e;
    int* ptr6=&f;
    printf("The address of e is %u\n",ptr5);
    printf("The address of f is %u\n",ptr6);
    if (ptr5==ptr6)
    {
        printf("The pointers are pointing at same address\n");
    }
    else
    {
        printf("The pointers are not pointing at same address\n");
    }



    return 0;
}