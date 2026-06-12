// Quick Quiz: Write a program to store the details of 3 employees from user defined data.

#include <stdio.h>
struct employee
{
    int salary;
    int Employee_ID;
    char name[50];
};
int main()
{
    struct employee e[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the salary of employee %d\n", i+1);
        scanf("%d", &e[i].salary);
        printf("Enter the employee id of employee %d\n", i+1);
        scanf("%d", &e[i].Employee_ID);
        getchar();
        printf("Enter the name of employee %d\n", i+1);
        fgets(e[i].name, sizeof(e[i].name), stdin);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Details of Employee %d\n" ,i+1);
        printf("Name: %s\n", e[i].name);
        printf("Employee ID: %d\n", e[i].Employee_ID);
        printf("salary: %d\n", e[i].salary);
    }

    return 0;
}