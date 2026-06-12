// Create a three–dimensional array and print the address of its elements in
// increasing order.

#include<stdio.h>

int main(){
    int ThreeD[2][2][2]={{{1,2},{3,4}},
                  {{5,6},{7,8}}};
    for (int k = 0; k < 2; k++)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("The value at index [%d][%d][%d] is %d",k,i,j,ThreeD[k][i][j]); 
                printf("The value of address at [%d][%d][%d] is %u",k,i,j,&ThreeD[k][i][j]);
                printf("\n");
            }
            
        }
        
    }
    
    return 0;
}
