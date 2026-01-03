#include <stdio.h>

int main()
{
    char str[] = {'z', 'e', 'y', 'd', '\0'};
    char str2[] = "zeyd";
// there are two ways to store string in a variable why
// not use null char because double quotes automatically write it

printf("%s",str2);
    return 0;
}