#include<stdio.h>
// pointer to array ...
int main(){
	int * p;
	int n, i;
	
	printf("enter the size of an array\n");
	scanf("%d",&n);
	int a[n];
	
	printf("enter the element in an array\n");

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	p=&a[0];
	
	for(i=0;i<n;i++){
		printf("%d ",*p);
		p++;
	}
	
	
}
