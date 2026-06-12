// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
// a function and print its address. Are these addresses same? Why?

// #include<stdio.h>

// void f(int);

// void f(int x)
// {
//     int* j=&x;
//     printf("The value of variable address inside the user defined function is %p\n",j);
// }
// int main(){
//     int i=10;
//     int* j=&i;
//     printf("The value of variable address inside the main function is %p\n",j);
//     f(i);
//     return 0;
// }

#include<stdio.h>

void five(int*);

void five(int* prt)
{
    printf("The address of the variable in function is %p\n",prt);  // this address will be the same,as we are using the same ponter 
    printf("The value of the variable in function is %d\n",*prt);

}
int main(){
    int x=10;  
    printf("The address of variable in main  is %p\n",&x);
    five(&x);
    return 0;
}

// The variable addresses are different because there are different variables, which have different memory location so different addresses 