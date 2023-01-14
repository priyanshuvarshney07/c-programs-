// Memory allocation to arrays 
// calloc(size-t n,size_t size)


#include<stdio.h>
#include<stdlib.h>
void main()
{
	
	int n,i,*arr;
	
	printf("enter the size : ");
	
	scanf("%d",&n);
	
	arr=(int *)(calloc(n,sizeof(int)));
	
	if(arr==NULL)
	
	printf("no memory alloicate\n");
	
	else
	{
		
		printf("enter Array elements are:\n");
		
		for(i=0;i<n;i++)
		{
			
			printf("%d\n",*(arr+i));
		}
	}
	
	
	
	
}



