#include <stdio.h>
/* not completed
Create an array of size 3 x 10 containing multiplication tables of 3 input taken by user
*/
int main (){
    int n1,n2,n3;
    printf("enter table you want :\n");
    
    scanf("%d %d %d", &n1,&n2,&n3);
    int tables[3][10],i,j;
    int mul[] = {n1,n2,n3};

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j <10 ; j++)
        {
          tables[i][j] = mul[i] * (j+1);
          printf("%d ",tables[i][j]);
          
           
        }
        
        printf("\n");
        
    }


    
return 0;
}