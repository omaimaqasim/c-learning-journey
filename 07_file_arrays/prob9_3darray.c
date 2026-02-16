#include <stdio.h>

int main (){
    // means this array has 2 bloack each block contain 3 rows and 3 cols
   
    int threeD_arr[2][3][3] ,i,j,k ;

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            for (k = 0; k< 3;k++)
            {
                threeD_arr[i][j][k] = i * k;
                printf("%u ",&threeD_arr[i][j][k] );
                
            }
            
            printf("\n");
            
        }
        printf("\n");
        
        
    }
    
    
return 0;
}