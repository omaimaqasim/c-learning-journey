#include <stdio.h>
#include <string.h>
// 6. Write a program to encrypt a string by adding 1 to the ascii value of its
// characters
int main (){
    char password[] = " hey how are you zeydenkhan22";
      int i ;
    // encrypt the password
    for ( i = 0; i <strlen(password); i++)
    {
        password[i] = password[i] + 1;
    }

    printf("%s\n",password);
    
    
return 0;
}