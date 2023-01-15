#include <stdio.h>
int main()
{
    int age;
    printf("enter the age\n");
    scanf("%d", &age);
    (age >= 18) && printf("eligible");
    (age < 18) && printf("not eligible");
    return 0;
}