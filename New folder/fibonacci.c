#include<stddef.h>
int main()
{
    int n1=0,n2=1,n3,i,n;
    printf("input: ");
    scanf("%d",&n);
    printf("up to %d:\n",n);
    printf("% 3d % 3d",&n1,&n2);
    for(i=3;i<=n;i++)
    {
        n3=n1+n2;
        printf("% 3d", n3);
        n1=n2;
        n2=n3;
    }
    printf("\n");
    return 0;
}
