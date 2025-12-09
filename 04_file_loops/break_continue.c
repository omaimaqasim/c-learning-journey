#include<stdio.h>

int main(){


    for ( int i = 0; i < 10; i++)
    {
        if (i==5)
        {
            // break;//exit this loop now
            continue; //skip this iteration and continue from next iteration mean it skip everything below continue
        }

        printf(" %d\n",i);
  
    }
    
    return 0;
}