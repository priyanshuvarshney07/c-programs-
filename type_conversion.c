#include <stdio.h>
int main()
{
    // type conversion compiler does not want to convert it into int type but convert
    // int a = (int)1.999999;
    // operator precedence is *,/,%,+,-,=.
    // int a = 4 + 9 * 10;
    printf("%d \n", !(1 > 2));
    return 0;
}