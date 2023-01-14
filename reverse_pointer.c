#include<stdio.h>

void reverse(int (*p)[n],int n){
	
	int i,a[n];
	
	for(i=n;i>0;i--){
		
		a[i]=*(*p+i);
	}
	
}
int main(){
	
	int n,i;
	printf("enter the number\n");
	
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	
	scanf("%d",&a[i]);
	
	
	reverse(&a,n);
	
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}

