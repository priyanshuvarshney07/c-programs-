#include<stdio.h>
int main(){
	int n,i;
	printf("enter the size of an ");
	scanf("%d",&n);
	int a[n],temp;
	printf("enter the values in an array\n");
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}
		for(i=0;i<n/2;i++){
		
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
		
	}
	printf("array in reverse order : ");
	for( i=0;i<n;i++)
	printf("%d ",a[i]);
	
	return 0;
	
}
