#include<stdio.h>

int dia(int);

int circum_cir(int);

int area_cir(int);

int main(){
	int r;
	
	printf("enter the radius of circle\n");
	
	scanf("%d",&r);
	
int d=	dia(r);
printf("the daimter of circle is:%d\n",d);
	
int c=	circum_cir(r);
printf("the circumference  of circle is:%d\n",c);
int area=	area_cir(r);
	printf("the area of circle is:%d\n",area);
}
int dia(int r){
	int d;
	d=2*r;
	return d;
}
int circum_cir(int r){
	int c;
	c=2*3.14*r;
	return c;
}
int area_cir(int r){
	int a;
	a=3.14*r*r;
	return a;
}

