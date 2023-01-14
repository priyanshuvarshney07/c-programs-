#include<stdio.h>
int main()
{
    // Pointer to an integer
//    int *p;
     int i;
    // Pointer to an array of 5 integers
    int (*ptr)[5];
    int arr[5];
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
	
     
    // Points to 0th element of the arr.
//    p = arr;
     
    // Points to the whole array arr.
    ptr = &arr;
     for(i=0;i<5;i++)
    printf(" ptr = %d\n",**ptr[i]);
//     
//    p++;
//    ptr++;
//     
//    printf("p = %d, ptr = %d\n", p, ptr);
//     
    return 0;
}
