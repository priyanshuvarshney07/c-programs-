#include<stdio.h>

void display(int n,int m,int(*p)[3]){
	
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++){
			
		printf("%d ",*(*(p+i)+j);
		
		}
		printf("\n");
	
	}
		
	
}

void main(){
	int a[3][3],i,j;
	
	printf("enter the elements in an array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	display(3,3,a);
}
