#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("numbers.txt", "w");

    int num=500;
    fprintf(ptr,"%d",num);
    fclose(ptr);
    return 0;
}