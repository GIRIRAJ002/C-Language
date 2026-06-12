// Solve problem 9 for time using ‘typedef’ keyword.
#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} D;

void Compare(D x, D y)
{
    if (x.year > y.year)
    {
        printf("The first date is newer\n");
    }
    else if (x.year < y.year)
    {
        printf("The second date is newer\n");
    }
    else if (x.year == y.year)
    {
        if (x.month > y.month)
        {
            printf("The first date is newer\n");
        }
        else if (x.month < y.month)
        {
            printf("The second date is newer\n");
        }
        else if (x.month == y.month)
        {
            if (x.day > y.day)
            {
                printf("The first date is newer\n");
            }
            else if (x.day < y.day)
            {
                printf("The second date is newer\n");
            }
            else if (x.day==y.day)
            {
                printf("Dates are equal!!\n");
            }
        }
    }
}
int main()
{
    D d1, d2;
    printf("Enter the first date:\n");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);
    printf("Enter the second date:\n");
    scanf(" %d %d %d", &d2.day, &d2.month, &d2.year);
    Compare(d1,d2);
    return 0;
}