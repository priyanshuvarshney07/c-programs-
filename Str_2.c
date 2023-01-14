#include<stdio.h>

void print_str(char a[]);

int main(){
	
	
	char fn[10];
	char ln[10];
	
	printf("enter the strings\n");
	
	scanf("%[^\n]s",fn);
	scanf("\n%[^\n]s",ln);
	
	print_str(fn);
	print_str(ln);
	
	
}
void print_str(char a[]){
	
	int i;
	
	for(i=0;a[i];i++){
	
	
	printf("%c\n",a[i]);
}
printf("\n");
	
	
}
	

