// swap the content of array to another arry

void swap(int*,int*,int);
void main(){
	int n,i;
	
	printf("enter the size of an array\n");
	
	scanf("%d",&n);
	
	int a[n],b[n];
	
	printf("enter the values in a array\n");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}
	printf("enter the values in b array\n");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&b[i]);
	}
	swap(a,b,n);
	
	printf("vlaues of a array\n");
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
printf("\n values of b array\n");
	
	for(i=0;i<n;i++)
	printf("%d ",b[i]);
		
}
void swap(int a[],int b[],int n){
	
	int temp,i;
for(i=0;i<n;i++){

	
	temp=a[i];
	a[i]=b[i];
	b[i]=temp;
}
}

