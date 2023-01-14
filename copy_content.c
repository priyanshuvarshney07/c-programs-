#include<stdio.h>

// copy content of one array into another using pointer (pointer of array).......

int main(){
	int n,i;
	
	printf("enter the size of array:....");
	
	scanf("%d",&n);
	
	int a[n], b[n];
	
	printf("enter the element in an array....\n");
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	int (*r)[n];
	
	r=&a;
	
//	for(i=0;i<n;i++){
//		
//		r[i]=&a[i];
//	}
	for(i=0;i<n;i++){
		
		b[i]=*(*r+i);
	}
	
	printf("the copy content of a array into b array\n");
	
	for(i=0;i<n;i++){
		
		printf("%d ",b[i]);
		
	}
}
