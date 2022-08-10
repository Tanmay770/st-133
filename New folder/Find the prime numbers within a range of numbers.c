#include <stdio.h>

void main(){
    int n,i,ctr,st,en;

    printf("Input starting number of range: ");
    scanf("%d",&st);

    printf("Input ending number of range : ");
    scanf("%d",&en);
    printf("The prime numbers between %d and %d are : \n",st,en);

    for(n = st;n<=en;n++)
       {
         ctr = 0;

         for(i=2;i<=n/2;i++)
            {
             if(n%i==0){
                 ctr++;
                 break;
             }
        }

         if(ctr==0 && n!= 1)
             printf("%d ",n);
    }
printf("\n");
}

