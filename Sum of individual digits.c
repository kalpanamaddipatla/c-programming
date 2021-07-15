# c-programming
#include <stdio.h>
int main() 
{
  int n,temp,sum=0;  
  printf("Enter an integer\n");
  scanf("%d",&n);
  while(n!=0)
  {
      temp=n%10;
      sum=sum+temp;
      n=n/10;
  } 
  printf("\nsum of digits=%d",sum);
  return 0;
}
