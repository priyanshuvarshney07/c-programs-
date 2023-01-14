#include<stdio.h>

void is_perfect();

int main(){
	is_perfect();
}

void is_perfect(){
	int n ,i ,fac=0;
	printf("enter the number ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		
		if(n%i==0)
		fac=fac+i;
	}
	if(fac==n)
	printf("no is perfect ");
	else
	printf("n is not perfect");
}
