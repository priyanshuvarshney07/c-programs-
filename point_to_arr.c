// pointer to an array 

#include<stdio.h>

int main(){
	
	int a[5],i,(*p)[5],sum=0;
	
	printf("entr the element in an array\n");
	
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	p=&a;
	
	for(i=0;i<5;i++){
		
		printf("%d  ",*(*p+i));
	
	}
	
}
