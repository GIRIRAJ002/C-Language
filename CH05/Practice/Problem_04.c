// Write a program using recursion to calculate nth element of Fibonacci series.

#include<stdio.h>
int fibo(int);
int fibo(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else 
    {
        return fibo(n-1) + fibo(n-2);
    }
}
int main(){
    int num;
    printf("Enter the number of element you want to know of fibonacci series:\n");
    scanf("%d",&num);
    printf("The %dth element of fibonacci series is %d\n ",num,fibo(num));
    
    return 0;
}





// #include<stdio.h>

// int fibo(int);
// int fibo(int n)
// {
//     int a=0,b=1,next;
//     if(n==1)
//     return a;

//     if (n==2)
//     return b;

//     for(int i=3;i<=n;i++)
//     {
//         next=a+b;
//         a=b;
//         b=next;
//     }
//     return b;
// }

// int main(){
//     int num;
//     printf("Enter the number of element you want to know of fibonacci series:\n");
//     scanf("%d",&num);
//     printf("The %dth element of fibonacci series is %d\n ",num,fibo(num));
//     return 0;
// }