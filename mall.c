#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *ptr,i,n;
	
	printf("enter the numbr you want");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	if(ptr=NULL)
	printf("Memory not avalible");
	
	else
	{
		printf("please enter the values\n");
		for(i=0;i<n;i++)
		{
			scanf("%d\n",(ptr+i));
			
		
			
		}
		for(i=0;i<n;i++)
		printf("%d\t",*(ptr+i));
		
	}
	free(ptr);
}
