#include<stdio.h>
int main()
{
    int i,n,a,sum=0;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i*i;
        printf("%d",a);
        sum=sum+a;
    }
    printf("\nSum is:%d",sum);
    return 0;
}
