# c-programming
#include <stdio.h>
int main() 
{
    int marks1,marks2,marks3,marks4,total=0;
    float avg=0.0;
  printf("\nEnter the marks in mathematics:");
   scanf("%d",&marks1);
  printf("\nEnter the marks in science:");
   scanf("%d",&marks2);
  printf("\nEnter the marks in social:");
   scanf("%d",&marks3);
  printf("\nEnter the marks in computer science:");
   scanf("%d",&marks4);
   total=marks1+marks2+marks3+marks4;
   avg=(float) total/4;
   printf("\n TOTAL =%d",total);
   printf("\n AGGREGATE=%0.2f",avg);
   if(avg>=75)
   printf("\n DISTINCTION");
   else if(avg>=60&&avg<75)
   printf("\n FIRST ");
   else if(avg>=50&&avg<60)
   printf ("\n SECOND DIVISION");
   else if(avg>=40&&avg<50)
   printf("\n THIRD DIVISION");
   else 
   printf("\n FAIL");
   return 0;
}
