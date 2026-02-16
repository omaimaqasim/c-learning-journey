#include <stdio.h>
// qno 1: create a two dimentional vector using structure
// qno 2: write a function sumvector which return the sum of two vector passed on it 
// the vector must me two dimensional


struct vector
{
    int x ;
    int y ;
};

void sumvector(struct vector vec1 , struct vector vec2);
void sumvector(struct vector vec1 , struct vector vec2){
     int sumx , sumy;
     sumx = vec1.x + vec2.x;
     sumy = vec1.y + vec2.y;

     printf("sum of vec1 and vec2 is = %di + %dj\n",sumx,sumy);
     
}

int main (){
    
    struct vector vec1 ;
    struct vector vec2 ;

    vec1.x = 3;
    vec1.y = 4;

    vec2.x = 8;
    vec2.y = 7;

   sumvector(vec1,vec2);
    
return 0;
}