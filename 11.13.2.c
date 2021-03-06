#include <stdio.h>
#include <ctype.h>
void read_char (char [], const unsigned int);

int main (void)
{
    const unsigned int MAX_SIZE = 128;
    char str[MAX_SIZE];
    unsigned int n = 0;

    puts ("Input the length of the string: ");
    scanf ("%u", &n);
    puts ("Input your string:");
    read_char (str, n);
    puts (str);

    return 0;
}

void read_char (char str[], const unsigned int size)
{
    unsigned int i = 0;

    while (getchar () != '\n');
    for (i = 0; i < size; i++)
    {
         str[i] = getchar ();
         if (isspace (str[1]))
             break;
    }
    str[size] = '\0';
}
