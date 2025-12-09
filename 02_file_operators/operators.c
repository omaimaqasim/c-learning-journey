// remeber this -5%2 = -1 sign of rm is same as numerator
// % can not apply on float

// remember that for exponantion we dont have operator for that
// we have to use math.h library at it has build in fn pow()

// remember that if we do operate int and int operation will be int result
// float and int operation will be float so remember if you it is rule of c language
// fr example : float div = 9/2 will give 4.000 but real result should be
// 4.5 it give this because you divide int with int if you want anser in float
// then use int and float

// demotion mean converting bigger data to smaller like float to int

// operator presedence: mean which operator will solve first if no perenthesis
// 1:*/% will solve first
// then +-
// then =

// operator associativity :direction mean if same priority then it solve from left to right
// it is not necessory that always left to right associativity
// just use parenthesis for not having confusion
#include<stdio.h>

int main(){
 int a=2,b=3,c=5;

 printf("%d",a*b/c + 7);
    return 0;
}