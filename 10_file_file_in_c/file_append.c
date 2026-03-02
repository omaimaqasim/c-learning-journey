#include <stdio.h>
// must check if auto save is on or not it save time
int main (){
    



 FILE *fptr;
//  remember that in both w and append mode if file is not exist it 
// create file first but not in r mode it give null if not present 
// and append does not remove all data before adding in to the file but write node does
fptr = fopen("zein.txt", "a");
int num = 3332;
fprintf(fptr, "%d", num);
fclose(fptr);
return 0;
}