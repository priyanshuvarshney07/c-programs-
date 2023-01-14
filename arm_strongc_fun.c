#include<stdio.h>

int is_power(int,int);
int is_armstrong(int );

int main(){
	int a,q,w,i;
	
	printf("enter the no of digit\n");
	scanf("%d",&a);
	
	q=is_power(10,(a-1));
	w=is_power(10,a);
	w--;
	
	for(i=q;i<w;i++)
	is_armstrong(i);
	

}



int is_power(int p,int q){
	int k=1,i;
	for(i=q;i>0;i--){
		
		k=k*p;
		
	}
	return k;
	


}
int is_armstrong(int n){
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

