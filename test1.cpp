#include<stdio.h>

int is_power(int ,int);

int main(){
	int k;
	k = is_power(2, 4);
	printf("%d", k);
}

int is_power(int p, int q){
	int i, k=1;
	for(i=q;i>0;i--){
		k=k*p;
	}
	return k;
}



