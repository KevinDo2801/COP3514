#include <stdio.h>

int main(){
    // overflow example
    short a = 30000;
    short b = 30000;
    
    short sum = a + b;
    printf("sum = %d\n", sum);

    // fix overflow example
    int sum2 = (int)a + (int)b;
    printf("sum2 = %d\n", sum2);
    
    // typedef
    typedef int Number;   //type Number = int
    typedef char Letter;  // type Letter = char
    Number num = 5;
    Letter letter = 'A';
    printf("num = %d\n", num);
    printf("letter = %c\n", letter);
    return 0;
}