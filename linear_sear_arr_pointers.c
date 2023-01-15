/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int liner_search(int *,int n,int elem ,int *pos);

int main(){
    
    int n,flag=0,i,k;
    printf("enter the size of an array");
    scanf("%d",&n);
    
    int a[n];
    
    int elem,pos;
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("enter the ement tobe sear\n");
    scanf("%d",&elem);
    
    k=liner_search(a,n,elem,&pos);
    if(k==1)
    printf("element is found is at pos %d",pos);
    
    else
    printf("not found");
    
}
int liner_search(int a[],int n,int elem,int *pos){
    
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==elem)
        {
            flag=1;
            *pos=i+1;
            break;
            
        }
    }
    return flag;
    
}
