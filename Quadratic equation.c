# c-programming
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
   int a,b,c,d,deno;
   float root1,root2;
    printf("\nQuadratic equation");
    printf("\nEnter the values for a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    deno=2*a;
    if (d>=0)
    {
        printf("\nRealRoots\n");
        root1=(-b+sqrt(d))/deno;
        root2=(-b-sqrt(d))/deno;
     printf("Root1=%f\tRoot2=%f",root1,root2);
    }
    else
    printf("\nImaginary roots");
    return 0;
}
