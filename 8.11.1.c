#include <stdio.h>
int main (void)
{
    int ch;
    int ct = 0;

    while ((ch = getchar ()) != EOF)
        ct++;
    printf ("%d characters read.\n", ct);

    return 0;
}
