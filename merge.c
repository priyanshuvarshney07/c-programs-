#include<stdio.h>

int main()
{
	int n1,n2;
    int arr1[n1], arr2[n2],  i, j, merge[n1+n2];
    printf("Enter Array 1st Size: ");
    scanf("%d", &n1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    j= i;
    printf("\nEnter Array 2nd Size: ");
    scanf("%d", &n2);
    printf("Enter Array 2nd Elements: ");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[j] = arr2[i];
        j++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<j; i++)
        printf("%d ", merge[i]);
    
    return 0;
}
