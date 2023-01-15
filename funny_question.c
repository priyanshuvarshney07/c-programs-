


#include <stdio.h>// end of the week .anger level.
        // positive -> simple question
        // negative -> funny questions
    //
    // N -> section
    // B -> misbehaving => + I units
    // G -> good behaviour => - D units
int main()
{

    int N, B, I, G, D, AL;
    scanf("%d%d%d%d%d", &N, &B, &I, &G, &D);
    AL = (B * I) - (G * D);

    if (AL > 0)
    {
        printf("Simple Questions");
    }
    else if (AL < 0)
    {
        printf("Funny Questions");
    }
    else if (AL == 0)
    {
        printf("God Knows!");
    }
    return 0;
}