#include<stdio.h>
#include<stdlib.h>
 void main( )
{
int *p,n,i;
printf ("Enter the number of integers to be entered ") ;
scanf("%d" ,&n) ;
p= (int *) malloc (n* sizeof(int) ) ;
if (p==NULL)
{ 
printf ("Memory not available\n");
}

else{
printf ("Enter an integer \n") ;
for(i=0;i<n;i++)

printf("%d\t",*(p+i)) ;
}
//for(i=0;i<n;i++)

}
