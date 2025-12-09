// in scanf \n does not mean next line it make your program stuck as 
// in scanf it mean wait for something until user click enter 
// \n now tells C:
// “Keep reading the input until I find a character that is not a space, tab, or newline.”

#include<stdio.h>

int main(){
int salary,tax;

printf("enter your salary (in lacs) per year: ");
scanf("%d",&salary);

if(salary<=250000){
  tax = 0;
}
else if (salary>250000 && salary<=500000){
tax = 0.05 * (salary=250000);
}
else if (salary>500000 && salary<=1000000){
tax = 0.05 * (salary-250000) + 0.2*(salary-500000) ;
}
else{
  tax = 0.05 * (salary-250000) + 0.2*(salary-500000)+ 0.5*(salary-1000000);
}


  printf("the total tax you have to pay is %d",tax);
    return 0;
}