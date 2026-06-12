// Take name and salary of two employees as input from the user and write them to
// a text file in the following format:
// i. Name1, 3300
// ii. Name2, 7700

#include<stdio.h>
#include<string.h>

int main(){
    FILE *ptr;
    ptr= fopen("ques4.txt","w");
    int salary;
    char name[50];
    printf("Enter the name of Employee 1\n");
    fgets(name,50,stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Enter his salary:\n");
    scanf(" %d",&salary);
    fprintf(ptr,"%s , %d\n",name,salary);
    getchar();
    printf("Enter the name of Employee 2\n");
    fgets(name,50,stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Enter his salary:\n");
    scanf(" %d",&salary);
    fprintf(ptr,"%s , %d\n",name,salary);
    
    fclose(ptr);
    return 0;
}