//   2. Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height 
// area of circle :pie*r2
// cylinder vol : pie*r2*h
#include<stdio.h>

int main(){
    int r=12,h=10;
    float area,vol;

    area = (3.14)*(r*r);
    vol = (3.14)*(r*r)*h;

    printf("the area of circle is : %.2f\n",area);
    printf("the volume of cylinder is:%.2f",vol);


    return 0;
}