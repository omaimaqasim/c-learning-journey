#include <stdio.h>
void slice(char str[], int m, int n);
void slice(char str[], int m, int n){
  
    char modify_str[20],i=0,j=0,k=0;
    
  while (str[i] != '\0')
  {
    if (i==m)
    {
        for ( j = m; j < n; j++)
        {
            modify_str[k] = str[j];
            k++;
            j++;
        }
        
    }
    i++;
  }
  
    // printing slice str

  while (modify_str[i] != '\0')
  {
     printf("%c",modify_str[i]);
     i++;
     
  }
  
    

}

int main (){
    char str[] = "hunza khan";

    slice(str,0,5);

return 0;
}

//  Write a function slice() to slice a string. It should change the original string such
// that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
// for slice.