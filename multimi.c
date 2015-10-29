#include <stdio.h>
#include <stdlib.h>

int main()
{    int v[10],c[10]={0},n,i,j,ok=0;;
    scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d",v[i]);

    for(j=1;j<pow(2,n);j++)
        for(i=0;i<n;i++)
        if(c[i]==1)
        c[i]=0;
    else
        {c[i]=1;break;}
    for(i=0;i<n;i++)
        {if(c[i]>0)
        printf("%d\n",v[i]);
    printf("\n");}
    return 0;
}
