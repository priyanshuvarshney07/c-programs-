#include<stdio.h>
// calculate power of any function ....

int power(int n ,int a){
	
	int i;int k=1;
	
	for(i=a;i>0;i--)
	{
		k=k*n;
	}
	
	return k;
}
int main(){
	
	int n,b;
	
	printf("enter the numbr\n");
	
	
	scanf("%d\n%d",&n,&b);
	
int d=power(n,b);

printf("the power of given no is:%d",d);

	
}
