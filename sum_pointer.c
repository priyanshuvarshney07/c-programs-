#include<stdio.h>

int add(int *a,int *b){
	
	int c;
	
	c=*a+*b;
	
	return c;
	
	
}
int main(){
	
	int p,q;
	
	printf("enter the nummbr\n");
	
	scanf("%d\n%d",&p,&q);
	
	
	int k=add(&p,&q);
	
	printf("the sum of two number is:%d\n",k);
	
	
	
}
