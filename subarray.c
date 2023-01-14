#include<stdio.h>
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++) {    // this loop is for indexing 0 to n;
	
		int start=i;
		for(j=i;j<n;j++){   // this loop is for extracting end value 
			int end=j;
			for(k=start;k<=end;k++){
				printf("%d ",a[k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
}
