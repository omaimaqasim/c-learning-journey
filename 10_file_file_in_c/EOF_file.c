#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("zein.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        // this will return char each time when there is end of file that ch will be EOF

        printf("%c", ch);

        if (ch == EOF)
        {
            break;
        }
       
    }
    return 0;

    }