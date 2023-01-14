#include<stdio.h>

// copy string into another using pointers......

int main(){
	
	int i;
	
//	printf("enter the size of string in an array\n");
//	
//	scanf("%d",&n);
//	

char a[10];

char(*p)[10];

char b[3];


//for(i=0;i<n;i++){
//	
//	scanf("%s", a[i]);
//	
//}
scanf("%s" ,a);
p=&a;
for(i=0;a[i];i++){
	
	b[i]=*(*p+i);
	
}
b[i]=0;

//for(i=0;b[i];i++)
printf("%s",b);

}
