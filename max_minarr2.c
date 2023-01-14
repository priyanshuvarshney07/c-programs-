#include<stdio.h>
int main(){
	int a[3][3],i,j;
	printf("enter the elements in an array");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int max =a[0][0];
	int min=a[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]>max)
			max=a[i][j];
			if(a[i][j]<min)
			min=a[i][j];
		}
	}
	printf("max value in array %d\n",max);
	printf("min value in array %d",min);
}
