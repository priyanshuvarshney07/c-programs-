#include<stdio.h>

void display(int rows,int columns,int (*arr)[columns]);

int main(){
	int n,i,j;
	printf("enter the size of an array");
	scanf("%d",&n);
	int arr[n][n];
		printf("enter the values in an array");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		
			scanf("%d",&arr[i][j]);
		}
	}
	display(n,n,arr);
}
void display(int rows,int columns,int (*arr)[columns]){
	int i=0,j=0;
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%d ",arr[i][j]); 
		}
		printf("\n");
	}
}
