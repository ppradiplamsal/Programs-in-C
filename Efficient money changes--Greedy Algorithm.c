/*
Purpose of program: To accept an amount in dollars and show how to pay that amount using the smallest number of $50, $20, $5, and $1 bills.
*/


#include <stdio.h>

//declare the pay_amount function
void pay_amount (int dollars, int *fifties, int *twenties, int *fives, int *ones);

int main(void) {
    //initialize the variables dollars, fifties, twenties, fives and ones as integers
    int dollars, fifties, twenties, fives, ones;
    
    printf ("Enter a dollar amount: ");
    //Ask the user to enter dollar amount and assign in to dollars
    scanf("%d", &dollars);
    //Call the pay_amount function
    pay_amount(dollars, &fifties, &twenties, &fives, &ones);
    //Print fifties, twenties, fives, ones
    printf ("\n$50 bills: %d", fifties);
    printf ("\n$20 bills: %d", twenties);
    printf ("\n$5 bills: %d", fives);
    printf ("\n$1 bills: %d\n\n", ones);
            
    return 0;
}


void pay_amount (int dollars, int *fifties, int *twenties, int *fives, int *ones) {
    
    //calculate the amount of fifties, twenties, fives, and ones that the amount in dollars can be converted into
    *fifties = dollars / 50;
    dollars = dollars % 50;
    *twenties = dollars / 20;
    dollars = dollars % 20;
    *fives = dollars / 5;
    dollars = dollars % 5;
    *ones = dollars / 1;
}
    
    

