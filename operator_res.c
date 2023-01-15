#include <stdio.h>
int main()
{
    // possible operators: + -  / + %
    int A, B, R;
    scanf("%d%d%d", &A, &B, &R);
    if (R == A + B)
    {
        printf("operator is +");
        if (A + B == B + A)
        {
            printf("\nCommutative");
        }
    }
    else if (R == A - B)
    {
        printf("operator is -");
        if (A - B == B - A)
        {
            printf("\nCommutative");
        }
    }
    else if (R == A * B)
    {
        printf("operator is *");
        if (A * B == B * A)
        {
            printf("\nCommutative");
        }
    }
    else if (R == A / B)
    {
        printf("operator is /");
        if (A / B == B / A)
        {
            printf("\nCommutative");
        }
    }
    else if (R == A % B)
    {
        printf("operator is %");
        if (A % B == B % A)
        {
            printf("\nCommutative");
        }
    }
    else
    {
        printf("Invalid input.");
    }
    return 0;
}