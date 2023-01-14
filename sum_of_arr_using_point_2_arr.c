#include<stdio.h>
// pointer to an array 

int main(){
	int (*p)[5];
	int a[5],i,sum=0;
	
	printf("enter the element in an array\n");
	for(i=0;i<5;i++){
		
		scanf("%d",&a[i]);
		
	}
	p=&a;
	for(i=0;i<5;i++){
		
		sum=sum+*(*p+i);
}
printf("the sum of an array%d ",sum);

}
