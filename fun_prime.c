#include<stdio.h>

void is_prime();

int main(){
	
	is_prime();
	
	
}

void is_prime(){
	int n,i,temp=0;
	
	printf("enter the number ");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0)
		temp++;
		else
		temp=0;
	}
	if(temp==0)
	printf("no is prime");
	else
	printf("no is not prime");
	
	
}
