// Write a program to illustrate the use of arrow operator → in C.

#include<stdio.h>
#include<string.h>

typedef struct Employee
{
    int salary;
    char name [50];
} Emp;

int main(){
    Emp e1;
    Emp* ptr1;
    ptr1=&e1;
    strcpy(e1.name,"Giriraj Singh");
    e1.salary = 450000;
    printf("The name of the employee is %s\n",ptr1->name);
    printf("The salary of the employee is %d\n",ptr1->salary);
    
    return 0;
}