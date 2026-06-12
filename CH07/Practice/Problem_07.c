// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
// and 9 respectively.

// #include <stdio.h>

// int main()
// {
//     int Table[3][10];

//     for (int i = 0; i < 3; i++)
//     {
//         int n = 1;
//         if (i == 0)
//         {
//             for (int j = 0; j < 10; j++)
//             {

//                 Table[i][j] = 2 * n;
//                 n++;
//             }
//         }
//         n = 1;
//         if (i == 1)
//         {
//             for (int j = 0; j < 10; j++)
//             {

//                 Table[i][j] = 7 * n;
//                 n++;
//             }
//         }
//         n = 1;
//         if (i == 2)
//         {
//             for (int j = 0; j < 10; j++)
//             {

//                 Table[i][j] = 9 * n;
//                 n++;
//             }
//             printf("\n");
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             printf("%d ", Table[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main()
{
    int Table[3][10];
    int nums[3] = {2, 7, 9};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            Table[i][j] = nums[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", Table[i][j]);
        }
        printf("\n");
    }

    return 0;
}