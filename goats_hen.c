#include <stdio.h>
int main()
{
    int x;
    int y;
    int legs;
    int heads;
    printf("enter the legs and heads\n");
    scanf("%d %d", &legs, &heads);
    x = (legs - 2 * heads) / 2;
    y = heads - x;
    printf("the no of goats are :%d\n", x);
    printf("the no of goats are :%d\n", y);
    return 0;
}