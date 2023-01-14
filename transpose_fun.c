#include<stdio.h>

int transpose(int (*arr[]),int ,int );
int main(){
	int n,i,j,k;
	printf("enter the elememt in an array:...");
	scanf("%d",&n);
	int arr[n][n],b;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
		scanf("%d",&arr[i][j]);	
		}
			k=transpose(arr,n,n);
		
		printf("%d the sum of column:.%d",k);
}
		
	
	}

	int transpose(int (*arr[]),int n,int n){
			int i,j,sum;
			for(i=0;i<n;i++){
			sum=0;
				for(j=0;j<n;j++){
				sum=sum+arr[i][i];
			
				}
				printf("\n");
			}
			return sum;
			
		}
