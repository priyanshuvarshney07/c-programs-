#include<stdio.h>
int main(){
	int n,i=0,j=0,k=0;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	int e[n];
	int o[n];
	printf("enter the element in aray\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++){
		if(a[i]%2==0){
		e[j]=a[i];
		j++;
	}
	else{
		o[k]=a[i];
		k++;
	}
	}
	printf("even array: ");
	for(i=0;i<j;i++)
	printf("%d ",e[i]);
	printf("\n odd array: ");
	for(i=0;i<k;i++)
	printf("%d ",o[i]);
	
}
