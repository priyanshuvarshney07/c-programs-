#include<stdio.h>
int main()
{
int n1,a[n1],n2,b[n2],c[n1+n2],i,j,k=0;
printf("enter the size of 1st array:");
scanf("%d",&n1);
printf("enter the numbers of 1st array:");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the size of 2nd array:");
scanf("%d",&n2);
printf("enter the numbers of 2nd array:");
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n1;i++)
{
c[i]=a[i];
k++;
}
for(j=0;j<n2;j++)
{
c[j]=b[i];
k++;
}
for(i=0;i<n1+n2;i++)
{
printf("%d ", &c[i]);
}
return 0;
}
