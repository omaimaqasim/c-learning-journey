#include<stdio.h>
// Problem01 
// Mr. A purchases online grocery from the ABC superstore, ABC superstore offers free delivery on orders above Rs. 1000, otherwise, they charge Rs. 150 as delivery charges. Write a function to calculate total delivery charges.

int purchase_amount( int amount);
int purchase_amount( int amount){
    
    if (amount<1000 && amount>0)
    {
       return amount + 150;
    }
    else if(amount>=1000){
        return amount;
    }
    
}

int main(){
 int p_amount;

    printf("enter user's purchase amount : \n");
    scanf("%d",&p_amount);

    printf("delivery charges : %d \n",purchase_amount(p_amount));

    return 0;
}