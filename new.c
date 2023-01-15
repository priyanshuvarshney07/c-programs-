/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
    printf(" \n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
            if (i != 5)
            {
                if (j == 1)
                    printf("*");
                else
                    printf(" ");
            }
        if (i == 5)
        {
            for (int j = 1; j <= 5; j++)
                printf("*");
        }

        for (int k = 1; k <= 5; k++)
        {
            for (int l = 1; l <= 4; l++)
            {
                if (k != 1 && k != 5)
                {
                    if (l != 2 && l != 3)
                        printf("*");
                    else
                        printf(" ");
                }
                if (k != 2 && k != 3 && k != 4)
                {
                    // for(int j=1;j<=4;j++)
                    printf("*");
                }
            }
            printf("\n");
        }

        // for(int i=1;i<=5;i++){
        //     for(int j=1;j<=4;j++)
        //     if(i!=1&&i!=5){
        //         if(j!=2&&j!=3)
        //         printf( "*");
        //         else
        //         printf(" ");

        //     }
        //     if(i!=2&&i!=3&&i!=4){
        //         for(int j=1;j<=4;j++)
        //         printf("*");
        //     }

        // }
        //     printf("\n");
        // }
        printf("\n");
    }
    return 0;
}
