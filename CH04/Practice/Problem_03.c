/*A do while loop is executed:
a. At least once.
b. At least twice.
c. At most once.*/

#include<stdio.h>

int main(){
    int num=0;
    do
    {
        printf("%d\n",num);
        num--;
    } while (num>0);
    // The condition is not true but the code will run at least once.
    return 0;
}