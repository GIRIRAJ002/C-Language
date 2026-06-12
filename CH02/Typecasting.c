#include<stdio.h>

int main(){
        
        int n = 45;
        float m=32.55;
        
        n = (int) m;  // Here, the float "m" is converted into int
        
        printf("The value of n is %d\n", n);
    
    return 0;
}
// Basically typecasting is used to convert the data type of the variable.
// typecasting is done by using parenthesis  (data type)