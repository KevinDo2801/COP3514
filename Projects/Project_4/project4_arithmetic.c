// Kiet Tuan Do
// 02/15/2024
// this program is about checking if the sequence is an arithmetic sequence or not

#include <stdio.h>

// this function will check if the sequence is an arithmetic sequence or not
int is_arithmetic_sequence(int *sequence,  int n);

int main(){
    int size;
    printf("Enter length of the sequence: ");
    scanf("%d",&size);

    int sequence[size];
    printf("Enter numbers of the sequence: ");
    for(int i=0; i<size; i++){
        scanf("%d",&sequence[i]);
    }

    if(is_arithmetic_sequence(sequence, size)){
        printf("yes");
    } else printf("no");

    return 0;
}

int is_arithmetic_sequence(int *sequence,  int n){
    int difference = *(sequence + 1) - *(sequence);
    for (int i = 1; i < n; i++) {
        if (*(sequence + i) - *(sequence + i - 1) != difference) {
            return 0;
        }
    }
    return 1;
}