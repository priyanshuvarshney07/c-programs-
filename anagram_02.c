#include<stdio.h>
#include<string.h>


int main(){
	
	char s[100];
	char a[100];
	
	printf("enter the strings\n");
	
	scanf("%[^\n]s",s);
	scanf("\n%[^\n]s",a);
	
	int i,j,c=0,f=0,temp;
	
	for(i=0;s[i];i++)
	c++;
	
	for(i=0;a[i];i++)
	f++;
	
	if(c==f){
		
		for(i=0;i<c-1;i++){
			
			for(j=0;j<c-i-1;j++){
				
				if(s[j]>s[j+1]){
					
					temp=s[j];
					
					s[j]=s[j+1];
					
					s[j+1]=temp;
				}
					if(a[j]>a[j+1]){
					
					temp=a[j];
					
					a[j]=a[j+1];
					
					a[j+1]=temp;
				}
				
			}
		}
//		puts(a);
//		puts(s);
	if(strcmp(a,s)==0)
		printf("strings are anagram..");
}
		else
		printf("not");
	return 0;
}
