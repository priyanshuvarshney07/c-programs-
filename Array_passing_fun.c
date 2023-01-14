#include<stdio.h>


int abc(int *,int );
int main() {
	
int n,i,k;
printf("enter the element in a an arraay: ");
scanf("%d",&n);
int a[n];


for(i=0;i<n;i++)
scanf("%d",&a[i]);

 k= abc (a,n);
printf(" the sum of given an array %d",k);

	
}
int abc (int a[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	sum=sum+a[i];
	return sum;
}
