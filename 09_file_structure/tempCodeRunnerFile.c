#include <stdio.h>
// create a two dimentional vector using structure

struct vector
{
    int vec1 ;
    int vec2 ;
};

int main (){
    
    struct vector vec ;

    vec.vec1 = 3;
    vec.vec2 = 4;

    printf("the two dimentional vector are = %d i + %d j\n", vec.vec1 , vec.vec2);
    
return 0;
}