#include <stdio.h>

int main(){
    int selection;
    int flag = 0;

    printf("Enter a number (1-5): ");
    scanf("%d", &selection);

    switch(selection){
        case 1:
            printf("you get a cat \n");
            break;
        case 2:
            printf("you get a dog \n");
            break;
        case 3:
            printf("you get a fish \n");
            break;
        case 4:
            printf("you get a turtle \n");
            break;
        case 5:
            printf("you get a bob \n");
            flag = 1;
            break;
        default: 
            printf("Not a valid input\n");    
            break;
    }

    if(flag == 1){
        printf("You get bob \n");
    }

    return 0;
}