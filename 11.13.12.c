#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void reverse_string (char *, char *);

int main (void)
{
    const unsigned int MAX_LEN = 128;
    char str[MAX_LEN];
    char * begin, * end;
    bool inword = false;

    puts ("Input a string: ");
    while (fgets (str, MAX_LEN, stdin) != NULL)
    {
        str[strlen (str) - 1] = '\0';
        begin = str;
        end = str + strlen (str) - 1;

        reverse_string (begin, end);

        puts (str);

        end = str;
        inword = false;
        while (*end != '\0')
        {
             if (!isspace (*end) && !inword)
             {
                 inword = true;
                 begin = end;
             }
             else if (isspace (*end) && inword)
             {
                  inword = false;
                  reverse_string (begin, end - 1);
             }
             end++;
             if (*end == '\0' && inword)
             {
                 reverse_string (begin, end - 1);
             }
        }
        puts ("Reverse:");
        puts (str);
        puts ("Input a string:");
    }
    return 0;
}

void reverse_string (char * begin, char * end)
{
     char temp;

     while (begin != end && end + 1 != begin)
     {
         temp = *begin;
         *begin = *end;
         *end = temp;
         begin++;
         end--;
     }
}
