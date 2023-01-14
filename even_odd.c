#include<stdio.h>

void even(int );
void odd(int );

int main(){
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	
	even(n);
	odd(n);
	
	
}
void even(int n){
	if(n%2==0)
	printf("Number is even");
}
void odd(int n){
	if(n%2!=0)
	printf("Number is odd");
}


