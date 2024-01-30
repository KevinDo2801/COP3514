#include <stdio.h>
#include <ctype.h>

int main(){
    char ch, message[100];
    int i = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n')
    {
        message[i++] =  toupper(ch);
    }
    
    message[i] = '\0';
    printf("Output: %s\n", message);

    return 0;
}