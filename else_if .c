# c-programming
#include <stdio.h>
int main() 
{
    int A,B,C;
    printf("Enter three numbers:");
    scanf("%d%d%d",&A,&B,&C);
    if(A>=B)
    {
        if(A>=C)
   printf("%d is largest number",A);
   else
   printf("%d is largest number",C);
    }
   else
   {
   if(B>=C)
   printf("%d is largest number",B);
   else
   printf("%d is largest number",C);
   }
    
    return 0;
}
