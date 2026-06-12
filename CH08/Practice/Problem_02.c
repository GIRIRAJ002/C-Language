// Write a program to take string as an input from the user using %c and %s confirm
// that the strings are equal.

#include <stdio.h>
#include<string.h>

int main()
{
    char str1[5];
    char str2[5];
    printf("Enter for str1:\n");
    
    for (int i = 0; i < 4; i++)
    {
        scanf(" %c", &str1[i]);
        
    }
    str1[4]='\0';

    printf("Enter for str2\n");
    
    scanf("%s", str2);

    int c = strcmp(str1, str2);

    printf("%d\n", c);

    return 0;
}