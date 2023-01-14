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
	int f=0,end=n-1;
	while(f<end){
		temp=a[f];
		a[f]=a[end];
		a[end]=temp;
		
		f++;
		end--;
	}
	printf("the reverse of array ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
