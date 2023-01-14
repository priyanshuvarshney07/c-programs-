#include<stdio.h>
int main(){
	int a[10],i,pos,element;
	int n;
	scanf("%d",&n);
printf("enter the elements in an array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element to be insert in an array and postion\n");
scanf("%d %d",&element,&pos);

for(i=n-1;i>=pos;i--){
	a[i+1]=a[i];
}
a[pos]=element;
n++;
printf("array after inserted element:  ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
