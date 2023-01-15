#include <stdio.h>

void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (i != 1 && i != 5)
            {
                if (j != 2 && j != 3)
                    printf("*");
                else
                    printf(" ");
            }
            if (i != 2 && i != 3 && i != 4)
            {
                // for(int j=1;j<=4;j++)
                printf("*");
            }
        }
        printf("\n");
    }
}