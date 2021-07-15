# c-programming
#include <stdio.h>
int main() 
{
  int n,t,sum=0,rem;  
  printf("Enter an integer\n");
  scanf("%d",&n);
  t=n;
   while(n!=0)
  {
      rem=n%10;
      sum=sum*10+rem;
      n=n/10
  } 
  if(t==sum)
  printf("%d is palindrome",t);
  else
  printf("%d is not a palindrome",t);
  return 0;
}
