#include <stdio.h>
/*
Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal*/
int main (){
    //remember that for sring you have to add one length for null char
    char str1[6],i,str2[6];

    //first method 
    // for ( i = 0; i < 6; i++)
    // {
    //     scanf("%c",&str1[i]);
        
    // }

    // str1[5] = '\0';

    // for ( i = 0; i < 6; i++)
    // {
    //     printf("%c",str1[i]);
        
    // }

    //second method

    scanf("%s", &str2);

    printf("%s\n",str2);
    

    
    
return 0;
}