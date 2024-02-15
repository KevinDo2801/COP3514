// Kiet Tuan Do
// 01/23/2024
/*This program verifies the validity of the input.
It only accepts lowercase alphabetic letters, such as those in "c programming!".
Non-alphabetic characters are limited to digits, white spaces, exclamation points,
question marks, and periods. The input must conclude with a newline character.
If the input meets these criteria, the program will output "Valid"; otherwise, it will print "Invalid."*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    bool valid = true;
    char c;
    printf("Enter input: ");

    do
    {
        c = getchar();

        // check the end of the input
        if (c == '\n')
        {
            break;
        }

        // check the input
        if (isdigit(c) || islower(c) || c == '!' || c == '?' || c == '.' || c == ' ') {
            valid = true;
        } else {
            valid = false;
            break;
        }

    } while (true);

    // print the result
    if (valid)
        printf("valid\n");
    else
        printf("invalid\n");

    return 0;
}
