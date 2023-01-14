#include<stdio.h>

int area_of_permiter(int );
int main(){
	int side;
	printf("enter the side of the perimeter");
	scanf("%d",&side);
int s=	area_of_permiter(side);
printf("the area of perimeter is %d",s);
return 0;
	
}

int area_of_permiter(int s )
{
	int area=s*s;
	return area;
}
