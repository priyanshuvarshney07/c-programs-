#include<stdio.h>
int main() {
	int t=0, n=0, i=0, j=0, a[100], sl=0, max=0, area=0;
	printf("Enter number of test cases: ");
	scanf("%d", &t);
	
	for(i=1; i<=t; i++){
		printf("Enter number of rods is test case %d: ", i);
		scanf("%d", &n);
		
		printf("Enter length of rods: ");
		for(j=0; j<n; j++) {
			scanf("%d", &a[j]);
		}
		
		sl = a[0];
		max = a[0];
		
		for(j=1;j<n;j++) {
			if(max < a[j])
			{
				max = a[j];			
			}
		}
		
		for(j=1;j<n;j++) {
			if(a[j] > sl  && a[j] < max)
			{
				sl = a[j];			
			}
		}
		area = max*sl;
		printf("max possible area is: %d", area);
		printf("\n\n");
	}
			
	return 0;
}

