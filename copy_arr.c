#include<stdio.h>
int main(){
	int n;
	printf("enter the size of an array:..");
	scanf("%d",&n);
	int a[n],*p[n],i,b[n],j=0;
	printf("enter the values in an array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		p[i]=&a[i];
		b[j]=*p[i];
		j++;
		
	}
		printf("the  value of 'a' array in 'bn'with diff address in b array:.....\n");
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}
