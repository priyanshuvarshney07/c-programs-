#include<stdio.h>

int main(){
	
	char firstname[];
	char lstname[];
	
	int i;
	
	printf("enter the strings\n");
	
	scanf("%[^\n]s",firstname);
	scanf("\n%[^\n]s",lstname);
	
	for(i=0;firstname[i];i++){
		printf("%c\n",firstname[i]);
	}
	
	printf("\n");
	
	for(i=0;lstname[i];i++)
	printf("%c\n",lstname[i]);
	

}
