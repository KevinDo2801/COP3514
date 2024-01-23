#include <stdio.h>

#define NUM_COMP 42

int main(){
    int user_guess;

    printf("Enter a number: ");
    scanf("%d",&user_guess);

    if (user_guess > NUM_COMP)
    {
        printf("Too high, go lower \n");
    } else if (user_guess < NUM_COMP)
    {
        printf("Too low, go higher \n");
    } else{
        printf("That's the right number! \n");
    }
    

    return 0; 
}