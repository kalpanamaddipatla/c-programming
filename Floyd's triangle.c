# c-programming
#include <stdio.h>
int main()
{
    int n,i,c,a=1;
  printf("Enter a number of rows of floyd's triangle\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int c=1;c<=i;c++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
