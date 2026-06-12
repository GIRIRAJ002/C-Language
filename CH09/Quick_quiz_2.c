// Quick Quiz: Complete this show function to display the content of employee
// void show(struct employee e); // function prototype

#include<stdio.h>
#include<string.h>
struct employee
{
    int ID;
    int salary;
    char name[100];
};

void show(struct employee ); // function prototype
void show(struct employee e)
{
    printf("Name: %s\n",e.name);
    printf("Salary: %d\n",e.salary);
    printf("ID: %d\n",e.ID);
}

int main(){
    struct employee e1;
    strcpy(e1.name,"Giriraj Singh");
    e1.ID=41;
    e1.salary=45000;
    show(e1);
    
    return 0;
}