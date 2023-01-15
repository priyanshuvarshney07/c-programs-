#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("enter the marks of 4 subjects:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    e = 410 - (a + b + c + d);
    if (e >= 40 && e <= 100)
        printf("marks required=%d", e);
    else if (e < 40)
        printf("marks required=40");
    else
        printf("you can't score 82%");
    return 0;
}