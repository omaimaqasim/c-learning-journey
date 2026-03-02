#include <stdio.h>
// must check if auto save is on or not it save time
int main (){
    
FILE *ptr;
ptr = fopen("number.txt","r");
int num;

fscanf(ptr,"%d",&num);
printf("the value of number is %d \n",num);

// remember that after reading one thing pointer automatically goes to another element


fscanf(ptr,"%d",&num);
printf("the value of number is %d \n",num);

// closing the file
 fclose(ptr);


return 0;
}