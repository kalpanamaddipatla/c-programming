# c-programming
#include <stdio.h>
int factorial(int i) 
{
    if(i<=1)
    {
        return 1;
    }
    return i*factorial(i-1);
}
int main()
{
  printf("%d\n",factorial(4));
     return 0;
}
