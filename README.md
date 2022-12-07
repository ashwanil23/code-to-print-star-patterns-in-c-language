# code-to-create-star-patterns-in-c-language
here i am going to tell you the code.
__________________________________________________________________________________________________________________________________________________________________________
/* this is a comment use vs-code or online compiler 
in turbo c use getch(); for output window */



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
__________________________________________________________________________________________________________________________________________________________________________
