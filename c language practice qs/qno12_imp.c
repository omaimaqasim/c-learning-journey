#include<stdio.h>
#include<string.h>

int main(){
char password[40];
int u=0,l=0,s=0,d=0,i;

printf("enter password: \n");
scanf("%s",&password);

if (strlen(password)<8)
{
    printf("password is too short \n");
}



    for ( i = 0; password[i]!='\0' ; i++)
    {
        char ch = password[i];
        if(ch>='A' && ch<='Z') u++;
        else if(ch>='a' && ch<='b') l++;
        else if(ch>='0' && ch<='9') d++;
        else if(ch>='0' && ch<='9') d++;
        else if (ch == '@' || ch == '#' || ch == '$') s++;
        
    }

    if (u>=1 && l>=1 && s>=1 && d>=2)
    {
       printf("password is strong\n");
    }
    else{
       printf("password is weak\n"); 
    }
    
    


    return 0;
}

/*
Q:
1.	Prompt the user to enter a password.
2.	Password requirements:
•	Minimum 8 characters
•	At least:
o	1 uppercase letter
o	1 lowercase letter
o	2 digits
o	1 special character (@, #, $)
3.	Display whether the password is Strong or Weak.
*/


/*
In C, a char is stored as a number (ASCII), so 'A' <= ch <= 'Z' works directly.
Uppercase: 'A'-'Z', lowercase: 'a'-'z', digits: '0'-'9'.
Special characters are checked individually, e.g., ch=='@'||ch=='#'||ch=='$'.*/