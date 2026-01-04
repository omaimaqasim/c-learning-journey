#include <stdio.h>

int main (){
    
    char str[] ="hello" ;
       str[0] = 'z';//it is permisible to  change str like that be cannot like str="nan"
       printf("%s\n",str);

    //    why not str = "zello" bc str is arr name not var and arr name is address of arr
    
    
    //you can modify string as a pointer like this : why? === bc here str is not arr it is an arrow
    //pointing to address of that str yu can modify str like this but you cannot do this she[0] = 'a' 
    //bc  she is just pointer pointing to array not array
    char *she = "mam";
          she="miss";
          printf("%s\n",she);
          
return 0;
}