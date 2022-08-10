/*#include<stdio.h>
int main()
{
    int i,n1;
    printf("Enter number: ");
    scanf("%d",&n1);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d= %d",n1,i,n1*i);
        printf("\n");
    }
    return 0;
}*/
//While loop
#include<stdio.h>
int main()
{
    int i=1,n1;
    printf("Enter number : ");
    scanf("%d",&n1);
    while(i!=11){
        printf("%d X %d= %d",n1,i,n1*i);
        printf("\n");
        i++;
    }
    return 0;
}
