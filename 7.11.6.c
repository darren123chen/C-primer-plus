#include <stdio.h>
int main ()
{
    int i = 0;
    while (i < 3) {
        switch (i++) {
            case 0: printf ("fat");
            case 1: printf ("hat");
            case 3: printf ("cat");
            default: printf ("Oh no! ");
        }
        putchar ('\n');
    }
    return 0;
}
