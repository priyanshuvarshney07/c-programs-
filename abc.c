#include <stdio.h>
int main()
{

    float x = 5.0, y;
    y = x++ * ++x;
    printf("%f", y);
}