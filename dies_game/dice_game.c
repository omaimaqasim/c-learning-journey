#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dice_rolling(int *die ,int size);
void dice_rolling(int *die ,int size){
  
    int i;
    
    printf("press enter for rolling 5 dice \n");
    getchar();
    
    for ( i = 0; i < size; i++)
    {
        
        //continue from this
        (*die) = (rand() % 6) + 1;
    }
    
}
int main (){
    int dice[5] ;

    
    srand(time(NULL));

    //&dice[0] = dice both give the address of first element of array
    dice_rolling(dice ,5);

return 0;
}