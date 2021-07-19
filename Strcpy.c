# c-programming
#include <stdio.h>
#include<string.h>
int main() 
{
   char str1[10], str2[10]="HELLO";
   strcpy(str1,str2);
   printf("\n str1:%s",str1);
   return 0;
}
