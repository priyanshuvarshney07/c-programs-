#include <stdio.h>
int main()
{
    int days;
    int years;
    int months;
    int weeks;
    printf("enter the days\n");
    scanf("%d", &days);
    years = days / 365;
    days = days % 365;
    months = days / 30;
    days = days % 30;
    weeks = days / 7;
    days = days % 7;
    printf(" total years :%d\n", years);
    printf("No of months:%d\n", months);
    printf("No weeks:%d\n", weeks);
    return 0;
}