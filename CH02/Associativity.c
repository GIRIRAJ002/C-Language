#include<stdio.h>

int main(){
    int a = 4;
    int b = 8;
    int c = 16;
        
     printf(" the value is %d\n ", a*b/c + 7);        
     printf("the value is %d", 4*a/2*b + 3*c);
       //  4*a/2*b + 3*c
       //  4*a/2*b + 48
       //  16/2*b + 48
       //   8*b + 48
       //  64+48 = 112
        
        return 0;
}
/* ALWAYS USE PARENTHESIS"()" TO DECRIBE THE ORDER OF OPERATIONS
IN ABSESNCE of parenthesis priority order is determined by "PRECEDENCE"
1. *%/
2. +-
3. =

NOTE-----> When operators of equal priority are present in an expression, the tie is taken care of by 

associativity.
e.g      x*y/z → (x*y)/z

           x/y*z → (x/y)*z

*, / follows left to right associativity
*/