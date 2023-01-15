#include <stdio.h>

int main()
{
     for (int i = 1; i <= 6; i++)
    {

        if (i == 1)

        {
            for (int j = 1; j <= 28; j++)
            {
                if (j == 1|| j == 2|| j == 3||j==9||j==13||j==22||j==24||j==25||j==26||j==27||j==28)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 2)
        {
            for (int j = 1; j <= 28; j++)
            {
                if (j == 1 || j ==4  || j ==7  || j ==10||j==14||j==22||j==26 )
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 3)
        {
            for (int j = 1; j <= 28; j++)
            {
                if (j ==1  || j == 2 ||j==3|| j == 6 || j == 11||j==15||j==21||j==26)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 4)
        {
            for (int j = 1; j <= 28; j++)
            {
                if (j == 1 || j == 4 || j == 6 || j == 7|| j == 8|| j == 9|| j == 10 || j == 11 || j == 12 || j == 16 || j == 20 || j == 26)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 5)

        {
            for (int j = 1; j <= 28; j++)
            {
                if (j == 1 || j == 4 || j == 6 || j == 12 || j == 17||j==19||j==26)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        if (i == 6)
        {
            for (int j = 1; j <= 28; j++)
            {
                if (j == 1 ||j==4|| j == 6 || j == 12 || j == 18|| j == 24 || j == 25 || j == 26|| j == 27||j==28)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}