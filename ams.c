

#include <stdio.h>
#include <math.h>
int main()
{
    int n, count = 0, temp, sum = 0;
    scanf("%d", &n);
    int m = n;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    // line no 10 loop is to count no of digits in a given number
    // armstrong is => suppose 153 in this 3 digits are three no we have to do 1^3+5^3+3^3=153...
    // 9474 4 digits => 9^4+4^4+7^4+4^4=9474
    // hope u got it.
    n = m;
    while (m > 0) // this loop is for checking armstrong no.

    {
        temp = m % 10;
        sum = sum + pow(temp, count);
        m = m / 10;
    }
    if (sum == n)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");
}
