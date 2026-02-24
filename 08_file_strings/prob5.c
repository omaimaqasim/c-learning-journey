#include <stdio.h>
// Write your own version of strcpy function from <string.h>
void strcopy(char str[] , char copy[] );
void strcopy(char str[] , char copy[] ){
 int i=0;

    while (str[i] != '\0')
    {
        copy[i] = str[i];
        i++;
    }
    // last element to null char
     copy[i] = '\0';
    
}
int main (){
    char str[] = "hello world" ;
    char copy[20];
    int i=0;

    strcopy(str,copy);

    while (copy[i] != '\0')
    {
       printf("%c",copy[i]);
       i++;
       
    }
    
return 0;
}