#include<stdio.h>
#include<stdlib.h>
 // malloc 
int main(){
	int n ,i,*ptr;
	
	printf("enter the total no values:");
	scanf("%d",&n);
	
//	ptr=(int*)malloc(n*sizeof(int));
ptr=(int*)calloc(n,sizeof(int));
	
	printf("\nenter the values");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		
	}
	printf("\n the entered values are:");
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));
		
	}
	free(ptr);
}
