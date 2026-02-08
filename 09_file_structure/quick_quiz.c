#include <stdio.h>

struct employee {
    char name[20];
    int code;
    float salary;
};

int main() {
    struct employee e1, e2, e3;

    printf("Enter names of the employees: ");
    //we dont use & with name as you know name is string mean collection of chars so 
    // variable name mean the add of first element
    scanf("%s %s %s", e1.name, e2.name, e3.name);

    printf("Enter code of the employees: ");
    scanf("%d %d %d", &e1.code, &e2.code, &e3.code);

    printf("Enter salary of the employees: ");
    scanf("%f %f %f", &e1.salary, &e2.salary, &e3.salary);

    printf("\nEmployee Details:\n");
    printf("%s %d %.2f\n", e1.name, e1.code, e1.salary);
    printf("%s %d %.2f\n", e2.name, e2.code, e2.salary);
    printf("%s %d %.2f\n", e3.name, e3.code, e3.salary);

    return 0;
}
