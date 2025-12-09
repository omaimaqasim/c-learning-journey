#include<stdio.h>

int main(){
//    remember that all non zero values in condition is always true and zero value in false in if else
// for example 
if(2){
    printf("this will executed and true\n");
}
if('c'){
 printf("this will executed and true\n");
}
if(2.3){
 printf("this will executed and true\n");
}
if(0){
 printf("this will not executed and true\n");
}
    return 0;
}