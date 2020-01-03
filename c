#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    int cents_owed;
    //Get positive change
    do
    {
        float dollars_owed = get_float("Change owed: ");
        cents_owed = round(dollars_owed * 100);
    }
    while (cents_owed <= 0);
    
    //Calculate coins required
    int quarters = cents_owed / 25;
    int dimes = (cents_owed % 25) / 10;
    int nickels = ((cents_owed % 25) % 10) / 5;
    int pennies = ((cents_owed % 25) % 10) % 5;

    printf("%i\n", quarters + dimes + nickels + pennies);
}
