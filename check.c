int main()
{
    int a;
    scanf("%d", &a);
    switch (a >= 0)
    {
    case 1:
        switch (a == 0)
        {
        case 1:
            printf("0");
            break;
        case 0:
            printf("postive");
            break;
        }
        break;
    default:
        printf("negative");
        break;
    }

    return 0;
}