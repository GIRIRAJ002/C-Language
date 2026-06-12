//  Write your own version of strcpy function from <string.h>

// #include<stdio.h>
// #include<string.h>

// void copy(char*,char *,int);
// void copy(char*x,char* y,int n)
// {
//     for (int i = 0; i < n ; i++)
//     {
//         x[i]=y[i];
//     }
//     x[n]='\0';
// }

// int main(){
//     char ARR[]="Giriraj";
//     char Copyto[50];
//     copy(Copyto,ARR,strlen(ARR));
//     printf("%s",Copyto);
//     return 0;
// }

#include<stdio.h>

void copy(char *x, char *y)
{
    int i = 0;

    while(y[i] != '\0')
    {
        x[i] = y[i];
        i++;
    }

    x[i] = '\0';
}

int main()
{
    char ARR[] = "Giriraj";
    char Copyto[50];

    copy(Copyto, ARR);

    printf("%s", Copyto);

    return 0;
}