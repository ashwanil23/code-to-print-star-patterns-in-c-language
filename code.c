#include<stdio.h>

int main()
{
    int i,j,a;
    printf("define the termination =");
    scanf("%d",&a);
    for (i=1;i<a;i++)
    {
        printf("*\n");
        for (j=1;j<=i;j++)
        printf("*");
    }
    printf("*");
    return 0;
}
