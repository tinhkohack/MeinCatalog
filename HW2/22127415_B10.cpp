#include <stdio.h>
int main()
{
    int cent,pennie,nickel,dime,quarter,half_dol,one_dol;
    printf("How many cents do you have: ");
    scanf("%d",&cent);
    one_dol = cent/100;
    cent = cent - one_dol*100;
    half_dol = cent/50;
    cent = cent - half_dol*50;
    quarter = cent/25;
    cent = cent - quarter*25;
    dime = cent/10;
    cent = cent - dime*10;
    nickel = cent/5;
    cent = cent - nickel*5;
    pennie = cent;
    
    printf("You have %d one-dollar coins, %d half-dollar coins, %d quarters, %d dimes, %d nickels and %d pennies.", one_dol,half_dol,quarter,dime,nickel,pennie);

}