// Kiet Tuan Do
// 01/17/2024
/*This program will calculate the cost of a party
based on the package selected,
the number of hours, and the number of guests.*/

#include <stdio.h>
#include <stdlib.h>

// validate input of package selection
int validatePackage(int package)
{
    if (package < 1 || package > 3)
    {
        printf("Invalid selection.");
        exit(0);
    }
    return 1;
}

// validate input of hours
int validateHours(int hours)
{
    if (hours < 1 || hours > 4)
    {
        printf("Invalid hours.");
        exit(0);
    }
    return 1;
}

// validate input of number of guests
int validateGuest(int package, int guest)
{
    if (package == 1 && (guest < 5 || guest > 20))
    {
        printf("Invalid number of guests.");
        exit(0);
    }
    else if (package == 2 && (guest < 8 || guest > 30))
    {
        printf("Invalid number of guests.");
        exit(0);
    }
    else if (package == 3 && (guest < 10 || guest > 40))
    {
        printf("Invalid number of guests.");
        exit(0);
    }
    return 1;
}

// calculate cost of the party
int calculatePartyCost(int package, int hours, int guest)
{
    int cost;
    if (package == 1)
    {
        cost = 150 + (hours - 1) * 100 + guest * 25;
        if (cost > 595)
        {
            cost = 595;
        }
    }
    else if (package == 2)
    {
        cost = 180 + (hours - 1) * 120 + guest * 22;
        if (cost > 850)
        {
            cost = 850;
        }
    }
    else if (package == 3)
    {
        cost = 200 + (hours - 1) * 150 + guest * 20;
        if (cost > 1050)
        {
            cost = 1050;
        }
    }
    return cost;
}


int main()
{
    int package, hours, guest, cost;

    printf("Please select from three packages: 1, 2, and 3\n");
    printf("Enter package selection:");
    scanf("%d", &package);
    validatePackage(package);

    printf("Enter hours:");
    scanf("%d", &hours);
    validateHours(hours);

    printf("Enter the number of guests: ");
    scanf("%d", &guest);
    validateGuest(package, guest);

    cost = calculatePartyCost(package, hours, guest);

    printf("Charge($):%d\n", cost);
    return 0;
}