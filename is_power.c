#include<stdio.h>

int is_power(int ,int);
//int armstrong(int);

int main(){
	int a,n;
	printf("enter the number\n");
	scanf("%d\n",&n);
	scanf("%d",&a);
	int k=is_power(n,a);
	printf("%d",k);
	
	// for(armstrong)
//		int n2;
//		printf("\nenter the number to check armstrong\n");
//		scanf("%d",n2);
//		
//		int flag=armstrong(n2);
//		if(flag==1)
//		printf("number is armstrong");
}
int is_power(int p, int q){
	int i,k=1;
	for(i=q;i>0;i--){
//		for(i=1;i<q;i++)
		k=k*p;
	}
	return k;
}
//int armstrong(int n1){
//	int i,c=0,temp,sum=0;
//	int m=n1;
//	while(n1>0){
//		n1=n1/10;
//		c++;
//	}
//	n1=m;
//	for(i=m;i>0;i=i/10){
//		temp=m%10;
////	int k=	is_power(temp,c);
//sum=sum+pow(temp,c);
//	}
//	if(sum==n1)
//	return 1;
//	else
//	return 0;
//	
//}




