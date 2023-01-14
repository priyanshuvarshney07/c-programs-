#include<stdio.h>
int main(){
	int n,i,j;
	printf("enter the size of an array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	
	for(i=0;i<n;i++){
		int curr=a[i]; // 2,4,6,8,10
		for( j=i+1;j<n;j++){
			printf("(%d,%d)",curr,a[j]);
		}
	}
}
