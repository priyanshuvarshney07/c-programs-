#include<stdio.h>
int main()
{
int n1,n2,i,j=0;
printf("enter the size of 1st array:");
scanf("%d",&n1);
int a[n1];
printf("enter the numbers of 1st array:");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the size of 2nd array:");

scanf("%d",&n2);
int b[n2];
int c[n1+n2];
printf("enter the numbers of 2nd array:");
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n1;i++)
{
c[i]=a[i];

}
j=i;
for(i=0;i<n2;i++)
{
c[j]=b[i];
j++;
}
for(i=0;i<j;i++)
{
printf("%d ", &c[i]);
}
return 0;
}
