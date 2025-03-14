#include<stdio.h>
#include<math.h>
int main()
{
   int n,i,j;
   scanf("%d",&n);
   int a[n][n],b[n][n],r[n][n];
   for(i=0;i<n;i++)
   {
   	for(i=0;i<n;i++)
   	{
   		scanf("%d",a[i][j]);
	   }
   }
   for(i=0;i<n;i++)
   {
   	for(i=0;i<n;i++)
   	{
   		scanf("%d",b[i][j]);
	   }
   }
    for(i=0;i<n;i++)
   {
   	for(i=0;i<n;i++)
   	{
   		r[i][j] = a[i][j] + b[i][j];
	}
	
   }
   for(i=0;i<n;i++)
   {
   	for(i=0;i<n;i++)
   	{
   		printf("%d ",r[i][j]);
	   }
	   printf("\n");
   }
   
}

