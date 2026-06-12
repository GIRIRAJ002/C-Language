// Write a program to check whether a given character is present in a string or not.

#include <stdio.h>

int main()
{
    char ARR[] = "Giriraj";
    char ch;
    printf("Enter the character you want to check\n");
    scanf("%c", &ch);
    int count = 0;
    for (int i = 0; ARR[i] != '\0'; i++)
    {
        if (ARR[i] == ch)
        {
            count = 1;
        }
    }
    if (count)
    {
        printf("Element Found\n");
    }
    else
    {
        printf("Element Not found\n");
    }
    return 0;
}