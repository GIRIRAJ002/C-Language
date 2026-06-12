#include<stdio.h>
struct Student
{
    int marks;
    char name[50];
    int roll_number;
};

void display(struct Student);

void display(struct Student s)
{
    printf("Student Details:\n");
    printf("Name: %s\n",s.name);
    printf("Roll number: %d\n",s.roll_number);
    printf("Marks: %d\n",s.marks);
}
int main(){
    struct Student s1;
    printf("Enter the name of student : \n");
    scanf("%s",&s1.name);
    printf("Enter the marks of student : \n");
    scanf("%d",&s1.marks);
    printf("Enter the roll number of student : \n");
    scanf("%d",&s1.roll_number);
    display(s1);
    return 0;
}