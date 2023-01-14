#include<stdio.h>
int main()
{
	int n,n2,n3;
	printf("enter the size of an array\n");
	scanf("%d%d%d\n",&n,&n2,&n3);
	int a[n],e[n],o[n], i;
	printf("enter the value in a an array");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++){
		
		if(a[i]%2==0)
		e[n]=a[i];
		else
		o[n]=a[i];
	}
	
	for(i=0;i<n;i++)
	printf("%d",&e[i]);
	for(i=0;i<n;i++)
	printf("%d",&o[i]);
	
	}
	
