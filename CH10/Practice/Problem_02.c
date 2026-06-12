// Write a program to generate multiplication table of a given number in text
// format. Make sure that the file is readable and well formatted.
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("ques2.txt", "w");
    if (ptr == NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        int num;
        printf("Enter your number:\n");
        scanf("%d", &num);
        for (int i = 1; i <= 10; i++)
        {
            fprintf(ptr, "%d * %d = %d\n", num, i, i * num);
        }
    }
    fclose(ptr);
    return 0;
}