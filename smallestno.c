#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("enter the two numbers\n");
    scanf("%d %d", &a, &b);
    int check = (a > b) * b + (b > a) * a;
    printf("the smallest no is :%d", check);
    return 0;
}