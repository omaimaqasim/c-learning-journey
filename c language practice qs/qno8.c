#include<stdio.h>
#include<string.h>

int main(){

    int em_no, dep_code, sh_code, emp_id;
    char grade[20];

    printf("Enter employee number (3 digits): ");
    scanf("%d",&em_no);

    printf("Enter Department code (2 digits): ");
    scanf("%d",&dep_code);

    printf("Enter Shift code (1 digit): ");
    scanf("%d",&sh_code);

    // validation
    if (!(em_no >= 100 && em_no <= 999)) {
        printf("Invalid employee number!\n");
    }

    if (!(dep_code >= 10 && dep_code <= 99)) {
        printf("Invalid department code!\n");
    }

    if (!(sh_code >= 1 && sh_code <= 9)) {
        printf("Invalid shift code!\n");
    }

    // ID formula
    emp_id = (em_no * 1000) + (dep_code * 10) + (sh_code);

    // Grade logic
    if (dep_code <= 10) {
        strcpy(grade, "Grade A");
    }
    else if (dep_code <= 20) {
        strcpy(grade, "Grade B");
    }
    else if (dep_code <= 35) {
        strcpy(grade, "Grade C");
    }
    else if (dep_code <= 52) {
        strcpy(grade, "Grade D");
    }
    else {
        strcpy(grade, "Grade E");
    }

    // Output
    printf("\nEmployee ID = %d\n", emp_id);
    printf("Salary Grade = %s\n", grade);

    return 0;
}
