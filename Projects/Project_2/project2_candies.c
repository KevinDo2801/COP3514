#include <stdio.h>

#define HERSHEY_KISSES_PRICE 15
#define REESE_PRICE 25
#define SNICKERS_PRICE 50

void checkAndDispense(int amount, int price)
{
    if (amount < price)
    {
        printf("Insufficient amount, %d cents returned\n", amount);
    }
    else
    {
        printf("Your change is %d cents\n", amount - price);
    }
}

int main()
{
    int amount = 0;
    int insert;

    do
    {
        printf("Insert coins: ");
        scanf("%d", &insert);
        amount += insert;
    } while (insert != 0);

    int choice;

    printf("1 - Hershey's kisses (15 cents), 2 - Reese's Peanut Butter Cups (25 cents), 3 - Snickers (50 cents)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        checkAndDispense(amount, HERSHEY_KISSES_PRICE);
        return 0;
    case 2:
        checkAndDispense(amount, REESE_PRICE);
        return 0;
    case 3:
        checkAndDispense(amount, SNICKERS_PRICE);
        return 0;
    default:
        printf("Invalid selection, %d cents returned", amount);
        break;
    }

    return 0;
}
