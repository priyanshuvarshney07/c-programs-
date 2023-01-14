#include<stdio.h>

int ar_neg(int *,int ); // this is the function decalariton int * is used for passing the adress as we lnow that in array call by adress is ussed and in an array a base adress is passed .

int main(){
	int n,i;
	printf("enter the elements in an array:...");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k=ar_neg(a,n);// her here a is the base adress of array a and n is the no of element in an array or it is the argument whic is going to cppy into the foramal parametr when this function is called 
	
	printf("all the negative in an array.%d",k);

}
int ar_neg(int a[],int n){
	int i,c=0;
	for(i=0;i<n;i++){
		if(a[i]<0)
		c++;
		
	}
	return c; // the value of c is return to the placed where it is called 
}
