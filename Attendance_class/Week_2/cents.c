#include <stdio.h>
#define QUATER 25
#define DIME 10
#define NICKEL 5

int main()
{
    int cents, quaters, dimes, nickels, pennies;
    printf("Enter the number of cents: ");
    scanf("%d", &cents);

    if (cents >= 0 && cents <= 10000)
    {
        quaters = cents / QUATER;
        cents = cents % QUATER;
        dimes = cents / DIME;
        cents = cents % DIME;
        nickels = cents / NICKEL;
        cents = cents % NICKEL;
        pennies = cents;
    }
    else
    {
        printf("Invalid input\n");
        return 1;
    }

    printf("Quaters: %d, Dimes: %d, Nickels: %d, Pennies: %d\n", quaters, dimes, nickels, pennies);

    return 0;
}