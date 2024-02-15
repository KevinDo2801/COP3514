#include <stdio.h>

// 1. &p --> 5
// 2. p --> 0xnum
// 3. &p --> 0xp

int main(){
    int num = 5;
    int *p;

    p = &num;
    printf("*p: %d\n", *p);
    printf("Stored at p: %p\n", p);
    printf("& of num: %p\n", &num);
    printf("& of p: %p\n", &p);

    // (*)p [ 0xF1C ] --> 0xF18
    // num [ 5 ] --> 0xF1c

    return 0;
}