#include <iostream>
#include<stdio.h>
using namespace std;
int a[10][10],i,j,n,m;
int main()
{
printf("m=");
scanf("%d",&m);
printf("n=");
scanf("%d",&n);

for(int i=1;i<=m;i++)
  for(int j=1;j<=n;j++)
      scanf("%d",&a[i][j]);
for (i=1;i<=(n/2)+(n%2);i++)
       {
         for (j=i; j<=m-i+1; j++)
            printf("%d ",a[i][j]);
         for (j=1+i; j<=n-i+1; j++)
            printf("%d ",a[j][m-i+1]);
         for (j=m-i;j>=i;j--)
            printf("%d ",a[n-i+1][j]);
         for (j=n-i; j>=i+1; j--)
           printf("%d ",a[j][i]);
       }
for(int i=1;i<=m;i++)
 {
  for(int j=1;j<=n;j++)
    printf(" %d ",a[i][j]);
    printf("\n");
 }
 return 0;
}
