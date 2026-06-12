// If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i) True.
// (ii) False.
// (iii) Depends.

#include<stdio.h>

int main(){
    int s[]={1,2,3};
    printf("%d",*(s+3)); // will give garbage value as it has only three elments, and s refers to index 0 ,s+1 to index 1, and s+2 refers to third element 
    return 0;
    printf("\n");
    
}

