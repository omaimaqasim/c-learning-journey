#include<stdio.h>

// 1.function delaration (function prototype)
int subtract(int a, int b);

// 2.function defination 
// int before function name tell that this function return value which has integer data tyoe

int subtract(int a, int b){
    printf("the subtraction of %d and %d is %d",a,b,a-b);
    return a-b;
}

int main(){
 
    // function call
    subtract(22,11);
    return 0;
}


// remember this function prototype should be before main fn 
// because it tells compiler that there is the functio name abc ,
// as you know that we have to declare function before call it 

// but you can just define function without declaring it before main function
// but if you define function after main then it is mandatory to declare function
// before main function because compiler should know function before call it
