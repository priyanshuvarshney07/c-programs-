#include<stdio.h>
// palindrome ...
#include<string.h>
int main(){
	
	char a[100];
	
	printf("enter the string\n");
	
	scanf("%[^\n]s",a);
	char orig[100];
	
	
	
	int i,count=0;
	
	for(i=0;a[i];i++)#include<stdio.h>
// palindrome ...
#include<string.h>>
int main(){
	
	char a[100];
	
	printf("enter the string\n");
	
	scanf("%[^\n]s",a);
	char orig[100];
	
	
	
	int i,count=0;
	
//	for(i=0;a[i];i++)
//	orig[i]=a[i];
	
	for(i=0;a[i];i++)
	count ++;
	
	int f=0;int end=count-1;
	for(i=0;a[i];i++)
	orig[i]=a[i];

	while(f<end){
		
		int temp=a[f];
		a[f]=a[end];
		a[end]=temp;
		
		f++;
		end--;
			
	}
		
	if(strcmp(a,orig)==0)
	printf("string is plaindrome");
	
	else
	printf("not planidrome");
	
}
	orig[i]=a[i];
	
	for(i=0;a[i];i++)
	count ++;
	
	int f=0;int end=count-1;
//	for(i=0;a[i];i++)
//	orig[i]=a[i];

	while(f<end){
		
		int temp=a[f];
		a[f]=a[end];
		a[end]=temp;
		
		f++;
		end--;
			
	}
		
	if(strcmp(a,orig)==0)
	printf("string is plaindrome");
	
	else
	printf("not planidrome");
	
}
