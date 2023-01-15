#include <stdio.h>;

int multiply(int a, int b); // function prototype

int main()
{
    // in main we call the functions
    int m, n, mul;

    mul = multiply(m, n);
    printf("the multiply of numbers:%d", mul);
}
int multiply(int a, int b) // here the function is define function definiation
{
    scanf("%d%d", &a, &b);
    int c = a * b;
    return c;
}