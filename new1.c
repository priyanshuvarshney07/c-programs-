#include<stdio.h>

int is_power(int ,int);
int arms(int);

int main(){
	int i, a, q, w;
	
	printf("Enter number of digits: ");
	scanf("%d", &a);
	
	q = is_power(10, (a-1));
	w = is_power(10, a);
	w = w-1;	
	
	for(i=q; i<w; i++)
		arms(i);
}

int arms(n)
{
	int count = 0, temp, sum = 0;
    int m = n;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    n = m;
    while (m > 0)
    {
        temp = m % 10;
        sum = sum + is_power(temp, count);
        m = m / 10;
    }
    if (sum == n)
        printf("%d\n", n);
    else
        return 0;
}

int is_power(int p, int q){
	int i, k=1;
	for(i=q;i>0;i--){
		k=k*p;
	}
	return k;
}



