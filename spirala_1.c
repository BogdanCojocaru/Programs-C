void citire(int a[10][10],int n){
   int i,j;
   for(i=0;i<n;i++)
      for(j=0;j<n;j++)
         scanf("%d",&a[i][j]);
}
void afisare(int a[10][10],int n){
   int i,j,k=0;
   for(k=0;k<n/2;k++){
      for(j=k;j<n-k;j++)
         printf("%d ",a[k][j]);
      for(i=k+1;i<n-k;i++)
         printf("%d ",a[i][n-k-1]);
      for(j=n-k-2;j>=k;j--)
         printf("%d ",a[n-k-1][j]);
      for(i=n-k-2;i>k;i--)
         printf("%d ",a[i][k]);
   }
}

int main(){
   int a[10][10],n;
   scanf("%d",&n);
   citire(a,n);
   afisare(a,n);
   if(n%2==1)
      printf("%d ", a[n/2][n/2]);
      printf("\n");
return 0;
}
