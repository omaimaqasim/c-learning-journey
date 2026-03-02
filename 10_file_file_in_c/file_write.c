#include <stdio.h>
// must check if auto save is on or not it save time
int main (){
 FILE *fptr;
//  w is write mode this mode will remove all data from the 
// file if exist then add what you write in it
fptr = fopen("zein.txt", "w");
int num = 3332;
// we use fscanf for reading a file and use fprintf for writing a file
fprintf(fptr, "%d", num);
fclose(fptr);
return 0;
}