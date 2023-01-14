// pointer to an array 
// single pointer variable point to base address of first element of an array
#include<stdio.h>
int main(){
	int n,i=0;
	printf("enter the size of an array..");
	scanf("%d",&n);
	int a[n],*p;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	p=a;
	for(i=0;i<n;i++){
		printf("%d\t",*p);
		p++;
	}
	
}
