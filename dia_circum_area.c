#include<stdio.h>
void diameter_of_circle();
void circumfrence_circle( );
void area_circle( );

int main(){

	diameter_of_circle();
	circumfrence_circle( );
	area_circle( );
	
}
void diameter_of_circle(){
	
	int r,d;
	
	printf("enter the radius of circle\n");
	scanf("%d",&r);
	
	d=2*r;
	printf("the diameter of circle %d\n",d);
	
}

void circumfrence_circle(){
	int r,c;
	
	printf("enter the radius of circle\n");
	scanf("%d",&r);
	
	c=2*3.14*r;
	printf("the circumfrenece of circle %d\n",c);
}
void area_circle(){
		int r,a;
	
	printf("enter the radius of circle\n");
	scanf("%d",&r);
	
	a=3.14*r*r;
	printf("the area of circle %d",a);
}
