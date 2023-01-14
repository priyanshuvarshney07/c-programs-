#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int (*p)[n];int a[n],i;
	
	printf("enter the number in an array\n");
	
	
		
	for(i=0;i<n;i++){
			
		
		scanf("%d",&a[i]);
	}
	
	(*p)[n]=&a;
	
	for(i=0;i<n;i++){
	
	
	printf("%d ",*p[i]);
}
}
