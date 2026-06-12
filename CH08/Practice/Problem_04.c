// Write a function slice() to slice a string. It should change the original string such
// that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
// for slice
#include<stdio.h>

void slice(char *,int,int);

void slice(char*a,int x,int y)
{
    for(int i=(x-1); i<=y-1;i++)
    {
        printf("%c",a[i]);
    }
}

int main(){
    char ARR[]="Giriraj";
    slice(ARR,1,4);
    return 0;
}
