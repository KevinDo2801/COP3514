#include <stdio.h>

void calculations(int *answer, int size, int *min, int *max, double *avg){
    *min = answer[0];
    *max = answer[0];
    *avg = 0;

    for(int i = 0; i < size; i++){
        if(answer[i] < *min){
            *min = answer[i];
        }
        if(answer[i] > *max){
            *max = answer[i];
        }
        *avg += answer[i];
    }

    *avg = *avg / size;

    printf("Minimum: %d\n", *min);
    printf("Maximum: %d\n", *max);
    printf("Average: %.2f\n", *avg);
}

int main() {
    int size = 5;
    int answer[size];

    printf("Answer the following questions: \n");
    printf("1. How many times do we speak each week? \n");
    printf("2. How many gifts did you get me for my birthday? \n");
    printf("3. How many tiktoks do you send me per day? \n");
    printf("4. How much do you love my cat? (1-10) \n");
    printf("5. How much do you think I like you? (1-10) \n");

    for(int i = 0; i < size; i++){
        printf("Enter your answer for question %d: ", i+1);
        scanf("%d", &answer[i]);
    }

    int min, max;
    double average;

    calculations(answer, size, &min, &max, &average);

    return 0;
}
