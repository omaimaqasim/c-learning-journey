#include <stdio.h>

int main (){
    // fgetc read one char form the file and fputc write one char in a file
// for getting char using write mode use fgetc
    FILE *fptr;
    fptr = fopen("zein.txt", "r");
   char c = fgetc(fptr);
    printf("%c\n",c);
    


return 0;
}