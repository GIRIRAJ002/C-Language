/*Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user.(Total marks=50) */

#include<stdio.h>

int main (){
     int phy,chem,math;
     printf("Enter your marks in physics:\n");
     scanf("%d",&phy);
     printf("Enter your marks in chemistry:\n");
     scanf("%d",&chem);
     printf("Enter your marks in Mathematics\n");
     scanf("%d",&math);
     
     if ((phy/50.0)*100>=33)
       printf("You are pass in physics\n");
     else
       printf("You are fail in physics\n");
       
     if ((chem/50.0)*100>=33)
       printf("You are pass in chemistry\n");
     else
       printf("You are fail in chemistry\n");
       
     if ((math/50.0)*100>=33)
       printf("You are pass in Mathematics\n");
     else
       printf("You are fail in Mathematics\n");
       
     if((phy/50.0)*100>=33&&(chem/50.0)*100>=33&&(math/50.0)*100>=33&&((phy+math+chem)/150)*100>=40)
       printf("You are pass");
     else
       printf("You are fail");
       
       return 0;
}
                                                 
     	