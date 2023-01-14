#include<stdio.h>
int main(){
	int a[2][2],b[2][2],flag=0;
	int i,j;
	printf("enter the value in first matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the value in 2 matrix\t");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		
			if(a[i][j]==b[i][j])
			flag=1;
		
		}
	}
	if(flag>0)
	printf("the two matrices are equal");
	else
	printf("not equal");
}
	

	

