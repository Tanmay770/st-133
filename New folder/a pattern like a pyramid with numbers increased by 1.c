#include<stdio.h>
int main()
{
    int i,j,r,n=1;
    printf("Enter rows number: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=(r-i);j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
            printf("%d ",n++);
        printf("\n");
    }
    return 0;
}
