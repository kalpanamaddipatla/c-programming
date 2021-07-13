# c-programming
#include<stdio.h>
#include<math.h>
 int main()
{
  int a,b,c,s;
  float area;
printf("\nEnter three values fora,b,c");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nArea of the triangle=%f",area);
return 0;
}
