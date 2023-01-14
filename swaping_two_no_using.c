#include<stdio.h>

int input(){
	int n;
	
	scanf("%d",&n);
	
	return n;
}

void  swap(int *p,int *q){
	
//	int a,b;
	
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;	
}
int main(){
	int a,b;
	
	a=input();
	
	b=input();
	
	printf("before swapping : %d %d\n",a,b);
	
	swap(&a,&b);
	printf("after swapping : %d %d",a,b);
	
}

