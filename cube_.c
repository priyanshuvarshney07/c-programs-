#include<stdio.h>

// cube of any number with function..

int cube_(int );
int main(){
	int n;
	
	printf("enter the number\n");
	
	scanf("%d",&n);
	
	int k=cube_(n);
	printf("\nThe cube of %d is:%d",n,k);
}
int cube_(int cube){
	int i,temp;
	
	for(i=0;i<=3;i++){
		
		 temp=cube*cube*cube;
	}
	return temp;
}
