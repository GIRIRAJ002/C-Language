/* Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).*/

#include<stdio.h>

int main(){
    int num=1,product,sum;
    for (sum=0 ;num<=10; num++)
    {
        product=8*num;
        sum=sum+product;
    }
    printf("%d",sum);
    return 0;
}