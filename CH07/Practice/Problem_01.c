// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
// to the third element where ptr is a pointer pointing to the first element of the
// array.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    printf("The value at index 0 is %d\n", *ptr);
    ptr += 2;

    if ((*ptr) == arr[2])
    {
        printf("The ptr+=2 pointer points to third element of the array\n");
    }
    else
    {
        printf("The ptr+=2 pointer donot point towards third element of the array\n");
    }
    return 0;
}