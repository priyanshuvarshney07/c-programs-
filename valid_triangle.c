#include <stdio.h>
int main()
{
    int T = 1;
    float A, B, C;

    scanf("%d", &T);
    scanf("%f%f%f", &A, &B, &C);

    while (T != 0)
    {
        // printf("\nEnter angles of triangle: ");
        // scanf("%f%f%f",&A,&B,&C);
        if (A + B + C == 180)
            printf("YES\n");
        else
            printf("NO");
        T--;
    }
}