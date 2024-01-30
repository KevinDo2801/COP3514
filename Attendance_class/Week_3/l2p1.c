#include <stdio.h>

int main(){
    int j = 100000;
    
    long i = (long)j * j;
    printf("Result with cast = %ld\n", i);

    return 0;   
}

// #include <stdio.h>

// int main(){
//     char ch;
//     int num = 0;
     
//     printf("Enter a password: ");
//     while ((ch = getchar()) != '\n')
//     {
//         if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')))
//         {
//             printf("Invalid password\n");
//             return 1;
//         }
//         num++;
//     }

//     if(num < 8)
//     {
//         printf("Invalid password\n");
//         return 1;
//     }
//     printf("Valid password\n");
    

//     return 0;
// }