#include <stdio.h>

int findMax(int a[], int n){
    int max = a[0];

    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    return max;
}

int sumOfDigits(int number){
    if(number == 0){
        return 0;
    }else{
        return number % 10 + sumOfDigits(number / 10);
    }
}

int main()
{
    int a[5] = {2475, 1245, 4785, 1214, 12};
    int max = findMax(a, 5);

    printf("max = %d\n", max);
    int sum = sumOfDigits(123456);
    printf("sum of 12456 = %d\n", sum);

    return 0;
}