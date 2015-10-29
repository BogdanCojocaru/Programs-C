#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int i, j,l,L,n,u, a[100][100];
int main()
{
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)

    scanf("%d",&a[i][j]);
for(i=0;i<n/2;i++)
{for(j=0;j<=i;j++)
printf("%d ",a[i][j]);
printf("\n");
}
for(i=n/2;i<n;i++)
{for(j=0;j<n-i;j++)
printf("%d ",a[i][j]);
printf("\n");
}
    return 0;
}
