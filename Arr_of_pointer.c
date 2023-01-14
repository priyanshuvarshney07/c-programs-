// Array of pointers ...
#include<stdio.h>
int main(){
	int n,i;
	printf("enter the size of array :...");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements in an array:..\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		int *r[n];
		for(i=0;i<n;i++){
			r[i]=&a[i];
//			*(r+i)=a+i;
		}
		// for accesing the value 
		printf("values of a array at add of array r:....");
		for(i=0;i<n;i++)
		printf("%d ",*r[i]);
		
		
		
	
}
