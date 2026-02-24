#include <stdio.h>
// Write a program to decrypt the string encrypted using encrypt function in
// problem 6
int main (){
    
     char password[] = "!ifz!ipx!bsf!zpv!{fzefolibo33";
      int i ;
    // decrypt the password
    for ( i = 0; i <strlen(password); i++)
    {
        password[i] = password[i] - 1;
    }

    printf("%s\n",password);
return 0;
}