// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void removeVowels(char str[]);
void removeVowels(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] != 'a' && str[i] != 'e' &&
            str[i] != 'i' && str[i] != 'o' &&
            str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' &&
            str[i] != 'I' && str[i] != 'O' &&
            str[i] != 'U')
        {
            printf("%c", str[i]);
        }
        i++;
    }
}


 void reverseWords(char str[]);
  void reverseWords(char str[]){
      
      int i=0,start=0, len=strlen(str), end;
      
      for(i=0;i<=len;i++){
          if(str[i] == ' ' || str[i] == '\0' ){
          end = i-1;
          
          while(end>start){
              char temp = str[start];
                 str[start] = str[end];
                 str[end] = temp;
                 end--;
                 start++;
          }
         start = i+1;
          
              
          }
      }
  }
int main()
{
       char course_title[]  = "programming fundamental",user_letter;
   int count_letter=0,i=0,total_vowels=0,total_con=0,count_totalchar=0;


   
// //7•Create a function reverseWords() to reverse each word in the course title.

// reverseWords(course_title);

// while(course_title[i] != '\0'){
//     printf("%c",course_title[i]);
//     i++;
// }
   
    //    // 1• 	Count and display how many times a user-specified letter appears in the course title.

    //    printf("enter a letter to search :\n");
    //    scanf("%c",&user_letter);

    //   while(course_title[i] != '\0'){
    //       if(course_title[i]==user_letter){
    //           count_letter++;
    //       }
    //       i++;
    //   }

    //   printf("%c appears %d times\n",user_letter,count_letter);

    // //   2•	Display the course title with the first letter of each word capitalized.

    // while (course_title[i] != '\0')
    // {
    //     if (i == 0 || course_title[i - 1] == ' ')
    //     {

    //         if (course_title[i] >= 'a' && course_title[i] <= 'z')
    //         {
    //             course_title[i] = course_title[i] - 32;
    //         }
    //         else if (course_title[i] >= 'A' && course_title[i] <= 'Z')
    //         {
    //             course_title[i] = course_title[i] + 32;
    //         }
    //     }

    //     printf("%c", course_title[i]);
    //     i++;
    // }

//     //  3 •	Extract and display the first letter of each word in the course title.
   
//    while(course_title[i] != '\0' ){
//        if(i==0 || course_title[i-1] == ' '){
//            printf("%c ",course_title[i]);
//        }
//        i++;
//    }
   

// //   4•	Count and display the total number of vowels and consonants in the course title.
// while(course_title[i] != '\0'){
    
//   if((course_title[i]>= 'a' && course_title[i]<= 'z' ) || (course_title[i]>= 'A' && course_title[i]<= 'Z' )){
      
//       switch(course_title[i]){
//           case 'a' : case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
//           total_vowels++;
//           break;
          
//           default:
//           total_con++;
//       }
//   }
//     i++;
// }

// printf("vowels : %d , consonent : %d",total_vowels,total_con);


// //   5•	Display the total number of characters in the course title.

// while(course_title[i]){
    
//      if((course_title[i]>= 'a' && course_title[i]<= 'z' ) || (course_title[i]>= 'A' && course_title[i]<= 'Z' )){
         
//          count_totalchar++;
//      }
//     i++;
// }

// printf("%d",count_totalchar);
    return 0;
}