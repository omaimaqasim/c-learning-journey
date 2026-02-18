#include <stdio.h>
// write a structure capable of storing date write a function to compare thoses dates

typedef struct date
{
    int dd;
    int mm;
    int yyyy;
} DT;

int compareDate(DT d1 , DT d2);
int compareDate(DT d1 , DT d2){

    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
       return 0;
    }

    if (d1.yyyy > d2.yyyy)
    {
       return 1;
    }

    else if (d1.yyyy < d2.yyyy)
    {
       return -1;
    }

    else if (d1.mm > d2.mm)
    {
        return 1;
    }

    else if (d1.mm < d2.mm)
    {
        return -1;
    }

    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
    
}

int main (){
    DT d1 = {12,4,2012}, d2 = {5,2,2033};

    printf("%d\n",compareDate(d1 , d2));
    
return 0;
}