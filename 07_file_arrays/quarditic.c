#include <stdio.h>
#include <math.h>

void quadritic(int a,int b,int c);
  void quadritic(int a,int b,int c){

    double result1,result2,d;

    d= (b * b) - (4 * a * c);

    if (d<0)
    {
         printf("Roots are imaginary\n");
        return;
    }
    

    result1 = (-b + sqrt(d)) / (2 * a) ;
    result2 = (-b - sqrt(d)) / (2 * a) ;
         
  

    printf("(%.2f , %.2f)",result1,result2);

}
int main (){
    int a=1,b=5,c=6;

     quadritic(a,b,c);
return 0;
}