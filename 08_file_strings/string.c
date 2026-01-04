#include <stdio.h>

int main()
{
    char str[] = {'z', 'e', 'y', 'd', '\0'};
    char str2[] = "zeyd";
    char name[30];
// there are two ways to store string in a variable why
// not use null char because double quotes automatically write it

printf("enter your name :\n");
scanf("%s",&name);
// scanf("%s",name); both are same bc name will be address of str
//and we dont have to write \0 bc scanf automatically do this


//scanf cannot be use to get multi-words strings like" ummi is bad"
    return 0;
}