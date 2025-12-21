#include <stdio.h>

// Exactly — in C, you cannot print an entire array directly like you can in JavaScript.
int main (){
    // it means that make a variable name marks that can store 5 values of same data type int
    int marks[5],i;
    float percentage[] = {2.2,3.3,4.4};
    // we dont need to tell that this array will be of specific length it will automatically place values in array
    //yeh jo values have yeh continous memory block sequence main store hoti hai for exp if 1 store hua 233 then next wala 234 per hi store hoga
    for ( i = 0; i <5; i++)
    {
        printf("\nenter marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
       
    }

       
    for ( i = 0; i < 5; i++)
    {
       
        printf("%d,",marks[i]);
        
    }
    
return 0;
}