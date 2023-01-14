#include <stdio.h>

int num(int);

void main()
{
	int n;
	n = num(2);
}

int num(n)
{
	printf("called");
	num(n);
}
