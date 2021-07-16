# c-programming

#include <stdio.h>
int main() 
{
    int a[20],i,key,n,flag=0;
   printf("How many elements?");
   scanf("%d",&n);
 printf("Enter array elements:\n");
   for(i=1;i<=n;i++)
   scanf("%d",&key);
   for(i=0;i<n;i++)
   if(a[i]==key)
   {
       flag++;
       break;
   }
  if(flag!=0)
  printf("elements found at index%d",i);
   else
   printf("element not found");
   return 0;
}
