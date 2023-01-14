#include<stdio.h>

void two_2_arr(int n,int m,int (*p)[3]){
	
	int sum=0,i,j;
	
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++)
		{
			
		sum=sum+p[i][j];
		
		}
		
		printf("%d ",sum);
		
		sum=0;
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
	two_2_arr(3,3,a);
}
