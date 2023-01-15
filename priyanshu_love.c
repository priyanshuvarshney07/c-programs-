
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
            if (i != 1 && i != 5)
            {
                if (j == 3)
                    printf("*");
                else
                    printf(" ");
            }
        if (i != 2 && i != 3 && i != 4)
        {
            for (int j = 1; j <= 5; j++)
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= 6; i++)
    {

        if (i == 1)

        {
            for (int j = 1; j <= 7; j++)
            {
                if (j != 2 && j != 3 && j != 5 && j != 6)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
        if (i == 2)
        {
            for (int j = 1; j <= 7; j++)
            {
                if (j != 1 && j != 4 && j != 7)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
        if (i == 3)
        {
            for (int j = 1; j <= 7; j++)
            {
                if (j == 1 || j == 7)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 4)
        {
            for (int j = 1; j <= 7; j++)
            {
                if (j == 2 || j == 6)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 5)

        {
            for (int j = 1; j <= 7; j++)
            {
                if (j == 3 || j == 5)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 6)
        {
            for (int j = 1; j <= 7; j++)
            {
                if (j == 4)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    printf("\n");

    // gla
    for (int i = 1; i <= 6; i++)
    {

        if (i == 1)

        {
            for (int j = 1; j <= 18; j++)
            {
                if (j == 3 || j == 4 || j == 7 || j == 15)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 2)
        {
            for (int j = 1; j <= 18; j++)
            {
                if (j == 2 || j == 7 || j == 14 || j == 16)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 3)
        {
            for (int j = 1; j <= 18; j++)
            {
                if (j == 1 || j == 7 || j == 13 || j == 17)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 4)
        {
            for (int j = 1; j <= 18; j++)
            {
                if (j == 1 || j == 3 || j == 4 || j == 5 || j == 7 || j == 12 || j == 13 || j == 14 || j == 15 || j == 16 || j == 17 || j == 18)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 5)

        {
            for (int j = 1; j <= 18; j++)
            {
                if (j == 2 || j == 5 || j == 7 || j == 12 || j == 18)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 6)
        {
            for (int j = 1; j <= 18; j++)
            {
                if (j == 3 || j == 4 || j == 7 || j == 8 || j == 9 || j == 10 || j == 12 || j == 18)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    printf("\n");
}
