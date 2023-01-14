#include<stdio.h>
int main(){
	int n,i,j,sum=0;
	scanf("%d",&n);
	int a[n][n];
	printf("enter the elements in an array\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				sum=sum+a[i][j];
			}
		}
	}
	printf("the sum of main diagonal elements in an array %d ",sum);
	
}
