#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5];
    int i, tm = 0, min = 410, req = 0;

    printf("Enter marks in 4 subjects: ");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 4; i++)
    {
        tm = tm + a[i];
    }

    req = min - tm;
    if (req <= 100)
    {
        if (req <= 40)
        {
            printf("you need 40 marks to pass and score 82 percent or more.");
        }
        else
        {
            printf("You need %d marks in 5th subject to score 82 percent marks", req);
        }
    }
    else
    {
        printf("You cannot score 82 percent marks");
    }
    getch();
}