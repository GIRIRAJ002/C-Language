// Quick Quiz: Use the library function to calculate the area of a square with side a.

// #include<stdio.h>
// int Area(int);
// int Area(int a)
// {
//     int A= a*a;
//     return A;
// }
// int main(){
//     int num;
//     printf("ENter the side of the square whose area needs to be calculated:\n");
//     scanf("%d",&num);

//     int c=Area(num);
//     printf("%d",c);

//     return 0;
// }

#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter the side of the square whose area needs to be calculated:\n");
    scanf("%d",&num);

    double c=pow(num,2);
    printf("%f",c);

    return 0;
}