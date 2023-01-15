// wap to print the absolute value of given no without math.h//
#include <stdio.h>
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d", &a);
    int check = a * ((a > 0) - (a < 0));
    printf("the absolute of number is :%d", check);
    return 0;
}