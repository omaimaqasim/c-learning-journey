#include <stdio.h>

int change(int a);

int change(int a)
{
    a = 77; // misnomer : Misnomer = wrong name
    return a;
}
int main()
{

    int b = 22;
    change(b);
    printf("%d", b);
    // this will print 22 not 77 why?  reason: because
    //  function change will take copy of b not b itself so
    //  b itself not change its alue remain same

    return 0;
}