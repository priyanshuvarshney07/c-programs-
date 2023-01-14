#include<stdio.h>

void max(int, int);
void min(int, int);

int main(){
	int a,b;
	
	printf("enter the numbers\n");
	
	scanf("%d\n%d",&a,&b);
	
	max(a,b);
	min(a,b);
	
}
void max(int a,int b){
	int max;
	if(a>b)
	max=a;
	else
	max=b;
	printf("the max between two is:%d\n",max);
	
}
void min(int a,int b){
	int min;
	if(a<b)
	min=a;
	else
	min=b;
	printf("the min between two is:%d\n",min);
}
