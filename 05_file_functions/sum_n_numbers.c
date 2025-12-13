#include<stdio.h>

int sum2_nth_no(int no);

int sum2_nth_no(int no){

    if (no==0)
    {
        return 0;
    }
    
    return no + sum2_nth_no(no-1);
}
int main(){

    int a = 3;

    printf("%d",sum2_nth_no(a));

    return 0;
}