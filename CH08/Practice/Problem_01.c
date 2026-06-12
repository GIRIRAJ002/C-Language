// Which of the following is used to appropriately read a multi-word string.
// 1. gets()
// 2. puts()
// 3. printf()
// 4. scanf()

#include<stdio.h>

int main(){
    char name[50];
    char name1[50];
   
    fgets(name1,50,stdin);
    printf("%s\n",name1);
    
    return 0;
}