#include<stdio.h>
int perfect_check(int );

int main(){
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int check=perfect_check(n);  // calling the function
	if(check==1)
	printf("number is perfect ");
	else
	printf("number is not perfect");
}


// function definitation 

int perfect_check(int n){
	int fac=0,i;
	
		for(i=0;i<n;i++){
			if(n%i==0)
			{
				 fac=fac+i;
			}
		}
		if(fac==n)
		return 1;
		else 
		return 0;
	}
	

