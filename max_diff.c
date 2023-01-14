#include<stdio.h>
int main() {
	int t=0, n=0, i=0, j=0, a[100], min=0, max=0, d=0;
	printf("Enter number of test cases: ");
	scanf("%d", &t);
	
	for(i=1; i<=t; i++){
		printf("Enter number of elements is test case %d: ", i);
		scanf("%d", &n);
		
		printf("Enter Elements: ");
		for(j=0; j<n; j++) {
			scanf("%d", &a[j]);
		}
		
		min = a[0];
		max = a[0];
		
		for(j=1;j<n;j++) {
			if(min > a[j])
			{
				min = a[j];
			}
			if(max < a[j])
			{
				max = a[j];			
			}
		}
		d = max - min;
		printf("max difference is: %d - %d = %d", max, min, d);
		printf("\n\n");
		
	}
			
	return 0;
}

