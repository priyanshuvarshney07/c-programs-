// write a c program to take an amount as input from user and print notes of 2000,500,100 in descending order .(enter the amount in multiple of 100)//
#include <stdio.h>
int main()
{
    int amount;
    int two_th;
    int five_hun;
    int hun;
    printf("enter the amount\n");
    scanf("%d", &amount);
    amount = amount - 100;
    two_th = amount / 2000;
    amount = amount % 2000;
    five_hun = amount / 500;
    amount = amount % 500;
    hun = amount / 100;
    amount = amount % 100;
    printf("No of 2000 thousands note :%d\n", two_th);
    printf("No of 500 thousands note :%d\n", five_hun);
    printf("No of 100 thousands note :%d\n", hun + 1);
    return 0;
}
