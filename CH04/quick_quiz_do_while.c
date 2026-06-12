// Quick Quiz: Write a program to print first ‘n’ natural number using do-while loop.


#include<stdio.h>

int main(){
    int num,i=1;
    printf("Enter the numberupto which you want to be  printed;\n");  
    scanf("%d",&num);
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=num);
    
    
    return 0;
}

/* MY APPROACH

#include<stdio.h>

int main(){
    int num,i=0;
    printf("Enter the numberupto which you want to be  printed;\n");  
    scanf("%d",&num);
    do
    {
        i++;
        printf("%d\n",i);
    } while (i<=(num-1));
    
    
    return 0;
}*/