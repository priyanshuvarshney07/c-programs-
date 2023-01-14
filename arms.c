#include<stdio.h>

int is_power(int ,int);
int arms(int);

int main(){
	int n, a;
	scanf("%d", &n);
	a = arms(n);
	
	if(a==1)
		printf("Armstrong");
	else
		printf("Not");
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
        return 1;
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



