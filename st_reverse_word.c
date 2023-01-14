#include<stdio.h>
#include<string.h>

// hello word  how are you 
int main(){
	int i,j;
	char s[100];
	gets(s);
	int l=strlen(s);
	
	for(i=l-1;i>=0;i--)
	if(s[i]==32 || i==-1){
		
		for(j=i+1;s[j]!=32||j==l;j++)
		printf("%c",s[j]);
	
	else/
	printf("%c",s[j]);
}
	printf(" ");
	
}
